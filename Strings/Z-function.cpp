class Solution {
public:
    int strStr(string haystack, string needle) {
        int count = 0;  // Variable to count matching characters (not used effectively)
        int index = -1; // Stores the starting index of the first occurrence of needle
        int n = haystack.size(); // Length of haystack
        int nl = needle.size();  // Length of needle
        int j = 0;  // Pointer for traversing the needle

        // Loop through each character in haystack
        for (int i = 0; i < n; i++) {
            // Check if the substring starting at index 'i' matches the needle
            while (j < needle.size() && haystack[i + j] == needle[j]) {
                j++;  // Move to the next character in needle
            }

            // If j reaches the full length of the needle, a match is found
            if (j == needle.size()) {
                index = i;  // Store the starting index
                return index; // Return the index immediately
            } 
            else {
                j = 0; // Reset j if the full needle was not found
            }
        }

        return -1; // If no match is found, return -1
    }
};
