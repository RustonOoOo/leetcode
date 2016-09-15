class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        unordered_map<string, vector<int>> record;//记录某个串的计算的值的集合
        return computeWithDP(input, record);
    }
    vector<int> computeWithDP(string input,unordered_map<string, vector<int>>& dict ) {
        vector<int> result;
        vector<int> left;
        vector<int> right;
        int sz = input.size();
        if(dict.find(input) != dict.end())return dict[input];
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
        dict[input] = result;
        return result;
    }
    
        
};