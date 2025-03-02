class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();  // Get the length of the input string
        string ans;  // Resultant string to store reversed words
        
        s = " " + s;  // Add an extra space at the beginning to handle the first word properly
        
        // Iterate from the end of the string to the beginning
        for (int i = n - 1; i >= 0; i--) {
            
            // Detect the start of a word (i.e., space followed by a non-space character)
            if (s[i] == ' ' && s[i + 1] != ' ') {
                int a = i + 1;  // Start of the word
                
                // Extract the word character by character
                while (a <= n && s[a] != ' ') {
                    ans.push_back(s[a]);  // Add character to the result string
                    a++;
                }
                
                // Add a space after the extracted word
                ans.push_back(' ');
            }
        }
        
        // Remove the trailing space if it exists
        int l = ans.size();
        if (l > 0 && ans[l - 1] == ' ') {
            ans.pop_back();
        }
        
        return ans;  // Return the final reversed words string
    }
};
