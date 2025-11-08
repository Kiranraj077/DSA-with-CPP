#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, char> mapST; // s -> t
        unordered_map<char, char> mapTS; // t -> s

        for (int i = 0; i < s.size(); ++i) {
            char c1 = s[i];
            char c2 = t[i];

            // Check existing mapping consistency
            if (mapST.count(c1) && mapST[c1] != c2) {
                return false;
            }
            if (mapTS.count(c2) && mapTS[c2] != c1) {
                return false;
            }

            // Create mapping if not yet mapped
            mapST[c1] = c2;
            mapTS[c2] = c1;
        }

        return true;
    }
};

int main() {
    Solution sol;
    cout << boolalpha; // to print true/false

    cout << sol.isIsomorphic("egg", "add") << endl;     // true
    cout << sol.isIsomorphic("foo", "bar") << endl;     // false
    cout << sol.isIsomorphic("paper", "title") << endl; // true

    return 0;
}

