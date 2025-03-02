class Solution {
public:
    bool isAnagram(string s, string t) {
        // Hashmaps to store character frequencies of both strings
        map<char, int> mpp1;
        map<char, int> mpp2;

        // If the lengths are different, they can't be anagrams
        if (s.size() != t.size()) {
            return false;
        }

        // Count occurrences of each character in `s`
        for (int i = 0; i < s.size(); i++) {
            mpp1[s[i]]++;
        }

        // Count occurrences of each character in `t`
        for (int i = 0; i < t.size(); i++) {
            mpp2[t[i]]++;
        }

        // Compare both frequency maps
        for (int i = 0; i < s.size(); i++) {
            // If a character in `t` is not found in `s` OR
            // If the frequency of a character in `s` and `t` do not match
            if (mpp1.find(t[i]) == mpp1.end() || mpp1[s[i]] != mpp2[s[i]]) {
                return false;
            }
        }

        return true;  // If all characters match in count, return true
    }
};
