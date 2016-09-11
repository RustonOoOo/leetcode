class Solution {
public:
    bool isNum(char c) {
        return (c >= '0' && c <= 9+ '0' );
    }
    int myAtoi(string str) {
        long res = 0;
        int sig = 1;
        int i = 0;
        while(str[i] == ' ')i++;
        if(str[i] == '-' || str[i] == '+'){sig = str[i] == '-'?-1:1;i++;}
        while(isNum(str[i])) {
            res = res*10 + str[i] - '0';
            if(sig == -1 && res > INT_MAX) return INT_MIN;
            else if(res > INT_MAX) return INT_MAX;
            i++;
        }
        return sig*res;
    }
};