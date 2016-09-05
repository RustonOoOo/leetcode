class Solution {
public:
    string getHint(string secret, string guess) {
        int sz = secret.size();
        vector<int> s(10, 0);
        vector<int> g(10, 0); 
        int bulls = 0,cows = 0;
        for(int i = 0; i < sz; i++) {
            if(guess[i] == secret[i])bulls++;
            else{
                s[secret[i] - '0']++;
                g[guess[i] - '0']++;
            }
        }
        for(int i = 0; i < 10; i++) {
            cows += min(s[i], g[i]);   
        }
        return to_string(bulls) + "A" + to_string(cows)+"B";
    }
};