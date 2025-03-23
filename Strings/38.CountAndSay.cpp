#include <iostream>
#include <string>
using namespace std;

class Solution {
    // Function to perform Run-Length Encoding (RLE) on a given string
    string rle(string str) {
        int l = str.size();  // Length of the input string
        string res;  // Resultant string after encoding
        char ch;  // Temporary variable to store the character count
        int count = 1;  // Initialize count of current character occurrences

        for (int i = 0; i < l; i++) {
            // Count consecutive occurrences of the same character
            while (i + 1 < l && str[i] == str[i + 1]) {
                i++;
                count++;
            }

            // Convert count to a character and append it to result
            ch = '0' + count;  // Convert count to char
            res.push_back(ch); // Append the count as a character
            res.push_back(str[i]); // Append the character itself
            
            count = 1; // Reset count for the next character sequence
        }
        
        return res;  // Return the encoded string
    }

public:
    // Recursive function to generate the "Count and Say" sequence for a given `n`
    string countAndSay(int n) {
        if (n == 1) {
            return "1";  // Base case: The first sequence is always "1"
        } else {
            return rle(countAndSay(n - 1));  // Recursively generate the sequence
        }
    }
};

// Driver Code (for testing)
int main() {
    Solution sol;
    int n = 5;
    cout << "Output: " << sol.countAndSay(n) << endl;  // Expected Output: "111221"
    return 0;
}
