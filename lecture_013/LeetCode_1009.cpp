// Link:- https://leetcode.com/problems/complement-of-base-10-integer/description/

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0)
            return 1;
        int ans = 0, rem, mul = 1;
        while (n) {
            rem = n % 2;
            rem ^= 1;
            n /= 2;
            ans += (rem * mul);
            mul *= 2;
        }
        return ans;
    }
};