class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {

            // for special characters and spaces skip

            while (start < end && !isalnum(s[start])) {
                start++;
            }

            while (start < end && !isalnum(s[end])) {
                end--;
            }

            // lowercase 
            
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};