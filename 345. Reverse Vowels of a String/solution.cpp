
class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        for(int i = 0, j = s.length()-1; i < j;) {
            while(j >= 0 && vowels.find(s[j]) == string::npos ){j--;}
            while( i < s.length() && vowels.find(s[i]) == string::npos){i++;}
            if(i > j) break;
            std::swap(s[i], s[j]);
            j--;
            i++;
        }
        return s;
    }
};