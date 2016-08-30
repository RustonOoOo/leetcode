#include<algorithm>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int strHash[26]{0};
        for(int i = 0; i < s.length(); i++) {
            strHash[s[i] - 'a']++;
            strHash[t[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(strHash[i] != 0) return false;
        }
        return true;
    }
};