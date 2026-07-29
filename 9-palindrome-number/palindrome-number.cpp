class Solution {
public:
    bool isPalindrome(int n) {
        long reverse = 0;
        int dp = n;

        while (n > 0 ){
            int lastdigit = n % 10;

            n = n /10;

            reverse = ( reverse * 10)+ lastdigit;
        }

        return dp == reverse;
    }
};