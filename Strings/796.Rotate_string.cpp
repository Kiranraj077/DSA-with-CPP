class Solution {
public:
    // Function to left rotate a string by d positions
    string rotation(string str, int d) {
        string temp; // Temporary string to store the first 'd' characters
        int j = 0;
        int l = str.size(); // Get the length of the string

        // Store the first 'd' characters in temp
        for (int i = 0; i < d; i++) {
            temp.push_back(str[i]);
        }

        // Shift the remaining characters to the left by 'd' positions
        for (int i = d; i < l; i++) {
            str[i - d] = str[i];
        }

        // Append the stored 'd' characters from temp to the end of the string
        for (int i = (l - d); i < l; i++) {
            str[i] = temp[j];
            j++;
        }

        return str; // Return the rotated string
    }

    // Function to check if 's' can be rotated to match 'goal'
    bool rotateString(string s, string goal) {
        int n = s.size(); // Get the length of 's'
        int r = 0; // Rotation counter
        string rots; // Stores the rotated string

        // Try rotating 's' from 0 to n times and check if it matches 'goal'
        while (r <= n) {
            rots = rotation(s, r); // Rotate the string by 'r' positions
            if (rots == goal) { // If rotated string matches 'goal', return true
                return true;
            }
            r++; // Increment rotation counter
        }

        return false; // If no match is found, return false
    }
};
