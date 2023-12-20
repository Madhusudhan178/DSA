class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);
    }
};
//program for a palindrome string
//This is a pseudo code
// f(i)
// {
//     if(i>=n/2)return true;
//     if(s[i]!=s[n-i-1])
//     return false;
//     return f(i+1)
// }