class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int mini = 0, count = 0;
        int l1 = -1, l2 = -1, l3 = -1;  // Stores the latest index of 'a', 'b', and 'c'

        // Iterate over the string
        for (int i = 0; i < n; i++) {
            // Update the latest index of 'a', 'b', or 'c'
            if (s[i] == 'a') {
                l1 = i;
            } 
            else if (s[i] == 'b') {
                l2 = i;
            } 
            else {  // s[i] == 'c'
                l3 = i;
            }

            // Ensure that all three characters have appeared at least once
            if (l1 > -1 && l2 > -1 && l3 > -1) {
                // Find the leftmost occurrence of 'a', 'b', or 'c'
                mini = min(l1, min(l2, l3));
            } 
            else {
                continue;  // If any character is missing, continue to the next iteration
            }

            // Count substrings that contain at least one 'a', 'b', and 'c'
            count += mini + 1;
        }
        return count;
    }
};
