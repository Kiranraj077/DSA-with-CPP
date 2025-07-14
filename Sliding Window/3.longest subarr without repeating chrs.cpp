class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Create a vector to store the last seen index of each character.
        // Initialized to -1 for all 256 ASCII characters.
        vector<int> mpp(256, -1);

        int left = 0, right = 0;  // Sliding window pointers
        int n = s.size();         // Length of the input string
        int len = 0;              // To store the maximum length found

        // Loop through the string using the right pointer
        while (right < n) {
            // If the current character has been seen before
            if (mpp[s[right]] != -1) {
                // And it is inside the current window
                if (mpp[s[right]] >= left) {
                    // Move the left pointer just past the last occurrence
                    left = mpp[s[right]] + 1;
                }
            }

            // Update the last seen index of the current character
            mpp[s[right]] = right;

            // Update the max length of the substring found so far
            len = max(len, right - left + 1);

            // Move the right pointer forward
            right++;
        }

        // Return the length of the longest substring without repeating characters
        return len;
    }
};
