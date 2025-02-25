class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      
        // If the input list is empty, return an empty string
        if (strs.empty()) {
            return ""; 
        }

        int mc = INT_MAX; // Initialize mc to store the minimum common prefix length
        int n = strs.size(); // Get the number of strings in the vector

        // Iterate through the array to compare adjacent strings
        for (int i = 0; i < n - 1; i++) {
            int j = 0;

            // Compare characters one by one until they differ or reach the end of any string
            while (j < strs[i].size() && j < strs[i + 1].size() && strs[i][j] == strs[i + 1][j]) {
                j++;
            }

            // Update mc with the minimum prefix length found so far
            mc = min(mc, j);

            // If at any point the common prefix length is 0, return an empty string immediately
            if (mc == 0) return ""; 
        }

        // Extract and return the longest common prefix using substr()
        return strs[0].substr(0, mc);
    }
};
