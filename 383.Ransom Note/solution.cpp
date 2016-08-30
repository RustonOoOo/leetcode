class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::sort(ransomNote.begin(), ransomNote.end());
        std::sort(magazine.begin(), magazine.end());
        int i;
        int j;
        for(i = 0, j = 0; i < ransomNote.length() && j < magazine.length();) {
            if(ransomNote[i] == magazine[j]){i++;j++;}
            else j++;
        }
        if(i == ransomNote.length())return true;
        return false;
    }
};