class Solution {
public:
    vector<string> split(string& str) {
        size_t pos = 0;
        size_t start = 0;
        str.push_back(' ');
        vector<string> strs;
        while((pos = str.find(' ', start)) != string::npos) {
            strs.push_back(string(str.begin()+start, str.begin()+pos));
            start = pos + 1;
        } 
        return strs;
    }
    bool wordPattern(string pattern, string str) {
        if(pattern.size() == 0) return str.size() == 0;
        unordered_map<char, string> mapp_s;
        unordered_map<string, char> maps_p;
        int psz = pattern.size();
        vector<string> str_split = split(str);
        if(psz != str_split.size())return false;
        for(int i = 0; i < psz; i++) {
            if(mapp_s.find(pattern[i]) == mapp_s.end() && maps_p.find(str_split[i]) == maps_p.end()) {
                   mapp_s[pattern[i]] = str_split[i];
                   maps_p[str_split[i]] = pattern[i];
            }
            else if(mapp_s[pattern[i]] != str_split[i] || maps_p[str_split[i]] != pattern[i])
                return false;
        }
        return true;
    }
};