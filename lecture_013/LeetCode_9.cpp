// Link:- https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int temp = x;
        long ans = 0L;
        while (x != 0) {
            int rem = x % 10;
            ans = (ans * 10) + rem;
            x /= 10;
        }
        if (ans == temp)
            return true;
        else 
            return false;
    }
};