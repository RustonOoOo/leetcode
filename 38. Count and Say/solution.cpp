class Solution {
public:
    string countAndSay(int n) {
        string result;
        string s = "1";
        for(int i = 1; i < n ; i++) {
            char element = s[0];
            int counter = 0;
            for(int j = 0; j < s.size(); j++) {
                if(s[j] == element)
                    counter++;
                else {
                    result.push_back('0'+counter);
                    result.push_back(element);
                    element = s[j];
                    counter = 1;
                }
            }
            result.push_back(counter+'0');
            result.push_back(s[s.size() - 1]);
            s = result;
            result.clear();
        }
        return s;
    }
};