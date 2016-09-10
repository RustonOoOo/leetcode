class Solution {
public:
    bool isPalindrome(string s) {
        int sz = s.size();
        for(int i = 0, j = s.size()-1; i < j;i++,j--) {
            while(i < sz && !isalnum(s[i])){i++;}
            while(j >= 0 && !isalnum(s[j])){j--;}
            if(!equalIgnoreCase(s[i],s[j]))return false;
        }
        return true;
    }
    bool equalIgnoreCase(char a, char b) {
        //if(isalnum(a) && isalnum(b)) return a == b;
        if(isalpha(a) && isalpha(b))return toupper(a) == toupper(b);
        return a == b;
    }
};