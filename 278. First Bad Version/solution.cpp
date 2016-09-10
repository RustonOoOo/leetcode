// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int first = 1,last = n;
        int find = 0;
        while(first < last) {
            int mid = first + (last - first) / 2;
            if(isBadVersion(mid))last = mid;
            else first = mid + 1;
        }
        return last;
    }
};