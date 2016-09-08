#include<stack>
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        int sz = s.size();
        for(int i = 0; i < sz; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if(stack.empty())return false;
                char c1 = s[i];
                char c2 = stack.top();stack.pop();
                if(c1 == ')' && c2 != '(')return false;
                else if(c1 == ']' && c2 != '[')return false;
                else if(c1 == '}' && c2 != '{')return false;
            }
        }
        return stack.empty();
    }
};