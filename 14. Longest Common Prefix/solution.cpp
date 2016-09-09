class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)return "";
        string result;
        for(int i = 0; i < strs[0].size();i++) {
            char element = strs[0][i];
            for(int j = 0; j < strs.size(); j++) {
                if(strs[j][i] != element || strs[j][i] == '\0')
                    return result;
            }
            result.push_back(element);
        }
        return result;
    }
};