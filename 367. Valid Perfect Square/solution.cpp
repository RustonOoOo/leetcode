//https://leetcode.com/problems/valid-perfect-square/
class Solution {
public:
    bool isPerfectSquare(int num) {
         if(num < 1)return false;
         long lo = 1, hi = num;
         while(lo <= hi) {
             long mid = lo + (hi-lo)/2;
             long t = mid*mid;// ·ÀÖ¹Òç³ö 
             if(t == num) return true;
             else if(t < num)lo = mid + 1;
             else hi = mid - 1;
         }
         return false;
    }
};