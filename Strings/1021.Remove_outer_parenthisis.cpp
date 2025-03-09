class Solution {
public:
    string removeOuterParentheses(string s) {
        int j = 0, depth = 0; // `j` is the position to insert valid characters, `depth` tracks the nesting level
        int n = s.size(); // Get the size of the input string

        // Iterate through each character in the string
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') { 
                if (depth > 0) { // If depth > 0, it's not an outermost '(', so keep it
                    s[j] = s[i];
                    j++;
                }
                depth++; // Increase depth since we encountered '('
            } 
            else { // If it's ')'
                depth--; // Decrease depth before checking, as it closes a '('
                if (depth > 0) { // If depth > 0, it's not an outermost ')', so keep it
                    s[j] = s[i];
                    j++;
                }
            }
        }

        // Remove extra characters from index `j` to the end (since we modified the string in place)
        s.erase(s.begin() + j, s.end());
        
        return s; // Return the modified string without outer parentheses
    }
};
