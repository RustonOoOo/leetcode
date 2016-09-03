class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int j = -1;
        for(int i = digits.size()-1;i >=0; i--) {
            if(digits[i] == 9)
                digits[i] = 0;
            else{
                j = i;
                break;
            }
        }
        if(j == -1)digits.insert(digits.begin(), 1);
        else digits[j] += 1;
        return digits;
    }
};