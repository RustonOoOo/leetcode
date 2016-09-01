class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        int val = 0;
        for(int i = 0; i < s.length(); i++) {
            val += map[s[i]];
            if(map[s[i]] > map[s[i-1]]) {
                val -= 2 * map[s[i-1]];
            }
        }
        return val;
    }
//better
class Solution {
public:
    int romanToInt(string s) {
        // unordered_map<char, int> map;
        // map['I'] = 1;
        // map['V'] = 5;
        // map['X'] = 10;
        // map['L'] = 50;
        // map['C'] = 100;
        // map['D'] = 500;
        //map['M'] = 1000;
        int val = 0;
        int sz = s.size();
        for(int i = 0; i < sz; i++) {
            val += romanCharToInt(s[i]);
            if(romanCharToInt(s[i]) > romanCharToInt(s[i-1])) {
                val -= 2 * romanCharToInt(s[i-1]);
            }
        }
        return val;
    }
    int romanCharToInt(char c) {
        	switch (c) {
        		case 'I': 	return 1;
        		case 'V':	return 5;
        		case 'X':	return 10;
        		case 'L':	return 50;
        		case 'C':	return 100;
        		case 'D':	return 500;
        		case 'M':	return 1000;
        		default:	return 0;
        	}
        }
};
};