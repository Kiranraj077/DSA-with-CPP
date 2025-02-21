class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size(); // Get the length of the string
        int no; // Variable to store the numeric value of a digit
        
        // Iterate from the last character to the first
        for (int i = n - 1; i >= 0; i--) {
            no = num[i] - '0'; // Convert character to integer
            
            // Check if the digit is odd
            if (no % 2 == 1) {
                return num.substr(0, i + 1); // Return the substring from 0 to i (inclusive)
            }
        }
        
        // If no odd digit is found, return an empty string
        return "";
    }
};
