class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())return 0;
        if(haystack.empty()) return -1;
        int i,j;
        for(i = 0, j = 0; i+j < haystack.size();) {
            if(haystack[i+j] != needle[j])i++, j = 0;
            else j++;
            if(j == needle.size())return i;
        }
        return -1;
    }
};