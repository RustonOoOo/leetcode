class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char maps_t[256] = {0};
        char mapt_s[256] = {0};
        int sz = s.size();
        for(int i = 0; i < sz; i++) {
            if(maps_t[s[i]] == 0 && mapt_s[t[i]] ==0) {
                maps_t[s[i]] = t[i];
                mapt_s[t[i]] = s[i];
            }
            else if(maps_t[s[i]] != t[i] || mapt_s[t[i]] != s[i])
                return false;
        }
        return true;
    }
};