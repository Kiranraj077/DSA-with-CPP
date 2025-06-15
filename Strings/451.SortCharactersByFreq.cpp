class Solution {
public:
    string frequencySort(string s) {
           map<char, int> freq;  // Count frequency of each character

        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
        }

        string res = "";
        while (res.length() < s.length()) {
            int maxFreq = 0;
            char maxChar;

            // Find the character with the highest frequency
            for (auto it = freq.begin(); it != freq.end(); it++) {
                if (it->second > maxFreq) {
                    maxFreq = it->second;
                    maxChar = it->first;
                }
            }

            // Add that character to the result string maxFreq times
            for (int j = 0; j < maxFreq; j++) {
                res += maxChar;
            }

            freq[maxChar] = 0;  // Mark as used
        }

        return res;
    }
};
