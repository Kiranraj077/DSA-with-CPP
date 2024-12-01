class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Variables to count the occurrences of 0, 1, and 2
        int c0 = 0, c1 = 0, c2 = 0;
        int n = nums.size(); // Get the size of the array

        // First pass: Count the number of 0s, 1s, and 2s in the array
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                c0 = c0 + 1; // Increment count for 0
            } else if (nums[i] == 1) {
                c1 = c1 + 1; // Increment count for 1
            } else {
                c2 = c2 + 1; // Increment count for 2
            }
        }

        // Second pass: Update the array with sorted values
        // Fill the first 'c0' elements with 0s
        for (int i = 0; i < c0; i++) {
            nums[i] = 0;
        }
        
        // Fill the next 'c1' elements with 1s
        for (int i = c0; i < (c0 + c1); i++) {
            nums[i] = 1;
        }

        // Fill the remaining 'c2' elements with 2s
        for (int i = (c0 + c1); i < (c0 + c1 + c2); i++) {
            nums[i] = 2;
        }
    }
};
//TC:O(n)
//SC:O(1)
