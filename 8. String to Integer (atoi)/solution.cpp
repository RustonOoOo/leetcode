class Solution {
public:
    bool isNum(char c) {
        return (c >= '0' && c <= 9+ '0' );
    }
    int myAtoi(string str) {
        long result = 0;
        string::iterator beg = std::find_if(str.begin(),str.end(), [](char c){return c != ' ';});
        if(!isNum(*beg) && *beg != '-' && *beg != '+')return 0;
        if(*beg != '-' && *beg != '+') {
            auto it = std::find_if(beg,str.end(), [this](char c){return !isNum(c);});
            for(auto iter = beg; iter != it;iter++) {
                result = result*10 + *iter - '0';
                if(result > INT_MAX)return INT_MAX;
            }
        }
        else if(*beg  == '-'|| *beg == '+'){
            auto it = std::find_if(beg+1,str.end(), [this](char c){return !isNum(c);});
            for(auto iter = beg+1; iter != it;iter++) {
                result = result*10 + *iter - '0';
                if(*beg == '-' && result > INT_MAX){return INT_MIN;}
                else if(result > INT_MAX)return INT_MAX;
            }
            if(*beg == '-' )result = -result;
        }
        
        //if(result < INT_MIN)return INT_MIN;
        return result;
    }
};