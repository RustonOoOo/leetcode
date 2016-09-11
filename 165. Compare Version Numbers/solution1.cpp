class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0; int j = 0;
        int sz1 = version1.size(),sz2 = version2.size();
        while( i < sz1 && j < sz2) {
            int dot1 = version1.find('.', i);
            int dot2 = version2.find('.', j);
            if(dot1 == string::npos) dot1 = sz1;
            if(dot2 == string::npos) dot2 = sz2;
            int lhs = atoi(string(version1.begin()+i, version1.begin()+dot1).c_str());
            int rhs = atoi(string(version2.begin()+j, version2.begin()+dot2).c_str());
            if(lhs > rhs) return 1;
            else if(lhs < rhs)return -1;
            i = dot1 + 1;
            j = dot2 + 1;
        }
        if(i == sz1 + 1 && j < sz2 + 1) {
            if(std::find_if(version2.begin()+j, version2.end(), [](char c)
                {return '0'<c && c <= '0'+9;})!=version2.end())return -1;
        }
        else if(j == sz2+1 && i < sz1 + 1) {
            if(std::find_if(version1.begin()+i, version1.end(), [](char c)
                {return '0'<c && c <= '0'+9;})!=version1.end())return 1;
        }
        return 0;
    }
};