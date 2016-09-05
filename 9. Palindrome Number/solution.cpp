class Solution {
public:
    static bool isPalindrome(int x) {
        if(x < 0) return false;
        int total_digits = 0;
        for(int i = x; i > 0; i /= 10){
            total_digits++;
        }
        auto divisor = std::pow(10, total_digits - 1);
        while(x > 0) {
            int a = x / divisor;
            int b = x % 10;
            if(a != b) return false;
            x = (x - a*divisor) / 10;
            divisor /= 100;
        }
        return true;
    }
};
