class Solution {
public:
    string intToRoman(int num) {
        string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	    int i = 0;
	    string s;
	    while(num > 0) {
	        while(num >= values[i]) {
	            num -= values[i];
	            s.append(roman[i]);
	        }
	        i++;
	    }
	    return  s;
    }
};