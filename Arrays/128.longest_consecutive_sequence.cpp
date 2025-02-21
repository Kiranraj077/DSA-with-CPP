class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();  

        // Sort the array to bring consecutive numbers next to each other
        sort(nums.begin(), nums.end());

        int count = 0;  // Tracks the length of the current consecutive sequence
        int mc = 0;  // Stores the maximum consecutive sequence length

        // Traverse the sorted array
        for(int i = 0; i < n - 1; i++) {
            // If the next number is exactly one more than the current number, increase count
            if ((nums[i] + 1) == nums[i + 1]) {
                count++;
                mc = max(mc, count);  // Update max count
            }
            // If duplicate elements are found, ignore and continue
            else if (nums[i] == nums[i + 1]) {
                continue;
            }
            // If there is a gap, reset count
            else {
                count = 0;
            }
        }

        // If the array is empty, return 0
        if (n == 0) {
            mc = 0;
            return mc;
        } 
        else {
            return (mc + 1);  // Add 1 to include the first number in the sequence
        }
    }
};
