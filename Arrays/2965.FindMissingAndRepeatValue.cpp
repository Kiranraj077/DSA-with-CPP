class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> freq((n * n)+1); // to count occurrences of numbers from 1 to n*n
        vector<int> res(2);

        // Count frequencies
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                freq[grid[i][j]]++;
            }
        }

        // Find the repeated and missing numbers
        for (int i = 1; i <= n * n; ++i) {
            if (freq[i] == 0) {
                res[1]=i; // missing
            } else if (freq[i] > 1) {
                res[0]=i; // repeated comes first
            }
        }

        return res;
    }
};
