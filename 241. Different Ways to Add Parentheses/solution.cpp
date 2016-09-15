class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> result;
        vector<int> left;
        vector<int> right;
        int sz = input.size();
        for(int i = 0; i < sz; i++) {
            if(input[i] == '+' || input[i] == '-' || input[i] == '*') {
                left = diffWaysToCompute(input.substr(0,i));
                right = diffWaysToCompute(input.substr(i+1));
                
                for(int a : left) 
                    for(int b : right) {
                        if(input[i] == '+') 
                            result.push_back(a+b);
                        else if(input[i] == '-')
                            result.push_back(a-b);
                        else
                            result.push_back(a*b);
                    }
            }
        }
        if(result.empty())
            result.push_back(atoi(input.c_str()));
        return result;
    }
};