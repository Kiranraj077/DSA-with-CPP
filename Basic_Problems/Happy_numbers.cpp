class Solution {
public:
    // Helper function to split the digits of a number and return the sum of their squares
    int split(int num) {
        int d = 0;   // Variable to store each digit
        int sum = 0; // Variable to store the sum of squares of digits
        
        // Loop to extract digits and compute the sum of squares
        while (num != 0) {
            d = num % 10;          // Extract the last digit
            sum = sum + (d * d);   // Add the square of the digit to the sum
            num = num / 10;        // Remove the last digit
        }
        
        return sum; // Return the sum of squares of digits
    }

    // Main function to check whether a number is a "happy number"
    bool isHappy(int n) {
        map<int, int> mpp; // Map to store intermediate results and detect cycles
        
        // Loop to keep calculating the sum of squares until a cycle is detected or result is 1
        while (n != 0) {
            int ans = split(n); // Get the sum of squares of digits
            
            // If the sum equals 1, it is a happy number
            if (ans == 1) {
                return true;
            } else {
                // If the sum is already present in the map, a cycle is detected, so return false
                if (mpp.find(ans) != mpp.end()) {
                    return false;
                } else {
                    // Mark the current sum as visited
                    mpp[ans]++;
                }
                // Update n with the new sum of squares
                n = ans;
            }
        }
        
        return false; // If the loop exits, it is not a happy number
    }
};
