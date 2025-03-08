class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int j = 0;

        // Step 1: Remove non-alphanumeric characters and store only valid characters in 's'
        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {  // Check if the character is alphanumeric
                s[j] = s[i];  // Store valid characters at the beginning
                j++;
            }
        }

        // Step 2: Convert all characters to lowercase for case-insensitive comparison
        for (int i = 0; i < j; i++) {
            s[i] = tolower(s[i]);
        }

        // Step 3: Check if the processed string is a palindrome
        for (int i = 0; i < j / 2; i++) {
            if (s[i] != s[j - 1 - i]) {  // Compare characters from both ends
                return false;  // Return false if a mismatch is found
            }
        }

        return true;  // If all characters match, it's a palindrome
    }
};
