#include <algorithm>
class Solution {
public:
    int firstUniqChar(string s) {
            //..O(n^2)
        //for(int i = 0; i < s.length(); i++) {
        //    if(count(s.begin(), s.end(), s[i]) == 1) return i;
        //}
        //return - 1;
	   //	o(n)
        vector<int> counter(256,0);
        for(int i = 0; i < s.length(); i++) {
            counter[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++) {
            if(counter[s[i]] == 1) return i;
        }
        return -1;
    }
};