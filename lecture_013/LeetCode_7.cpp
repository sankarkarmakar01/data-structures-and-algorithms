// Link:- https://leetcode.com/problems/reverse-integer/description/

class Solution {
public:
    int reverse(int x) {
        if (x == 0 || (x > -10 && x < 10)) {
            return x;
        }
        int rem;
        long ans = 0L;
        while (x != 0) {
            int rem = x % 10;
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                return 0;
            }
            ans = (ans * 10) + rem;
            x /= 10;
        }
        return ans;
    }
};