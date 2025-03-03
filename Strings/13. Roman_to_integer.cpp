class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;  // Stores the final integer value
        int n = s.size();  // Length of the input Roman numeral string

        // Iterate through each character in the string
        for (int i = 0; i < n; i++) {
            // Case for 'I' (1)
            if (s[i] == 'I') {
                // If 'I' is not followed by 'V' (5) or 'X' (10), add 1
                if (s[i + 1] != 'V' && s[i + 1] != 'X') {
                    ans++;
                } else {
                    // If 'I' is followed by 'V' (IV = 4)
                    if (s[i + 1] == 'V') {
                        ans += 4;
                        i++;  // Skip the next character since it's already processed
                    }
                    // If 'I' is followed by 'X' (IX = 9)
                    else if (s[i + 1] == 'X') {
                        ans += 9;
                        i++;
                    }
                }
            }
            // Case for 'V' (5)
            else if (s[i] == 'V') {
                ans += 5;
            }
            // Case for 'X' (10)
            else if (s[i] == 'X') {
                // If 'X' is not followed by 'L' (50) or 'C' (100), add 10
                if (s[i + 1] != 'L' && s[i + 1] != 'C') {
                    ans += 10;
                }
                // If 'X' is followed by 'L' (XL = 40)
                else if (s[i + 1] == 'L') {
                    ans += 40;
                    i++;
                }
                // If 'X' is followed by 'C' (XC = 90)
                else if (s[i + 1] == 'C') {
                    ans += 90;
                    i++;
                }
            }
            // Case for 'L' (50)
            else if (s[i] == 'L') {
                ans += 50;
            }
            // Case for 'C' (100)
            else if (s[i] == 'C') {
                // If 'C' is not followed by 'D' (500) or 'M' (1000), add 100
                if (s[i + 1] != 'D' && s[i + 1] != 'M') {
                    ans += 100;
                }
                // If 'C' is followed by 'D' (CD = 400)
                else if (s[i + 1] == 'D') {
                    ans += 400;
                    i++;
                }
                // If 'C' is followed by 'M' (CM = 900)
                else if (s[i + 1] == 'M') {
                    ans += 900;
                    i++;
                }
            }
            // Case for 'D' (500)
            else if (s[i] == 'D') {
                ans += 500;
            }
            // Case for 'M' (1000)
            else if (s[i] == 'M') {
                ans += 1000;
            }
        }

        return ans;  // Return the computed integer value
    }
};
