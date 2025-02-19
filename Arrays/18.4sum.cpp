class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());  // Sort the array to enable two-pointer approach
        long long sum = 0;
        int n = nums.size();

        // Iterate through the array, selecting the first number of the quadruplet
        for(int i = 0; i < n; i++) {
            // Skip duplicate elements for the first number to avoid duplicate quadruplets
            if(i != 0 && nums[i] == nums[i-1]) continue;

            // Select the second number of the quadruplet
            for(int j = i + 1; j < n; j++) {
                // Skip duplicate elements for the second number
                if(j > i + 1 && nums[j] == nums[j-1]) continue;

                int k = j + 1;  // Left pointer
                int l = n - 1;  // Right pointer

                // Use two-pointer approach to find the remaining two numbers
                while(k < l) {
                    // Calculate the sum of four selected numbers
                    sum = (long long) nums[i] + nums[j] + nums[k] + nums[l];

                    if(sum < target) {
                        k++;  // Increase left pointer to get a larger sum
                    } else if(sum > target) {
                        l--;  // Decrease right pointer to get a smaller sum
                    } else {  // Found a valid quadruplet
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    
                        k++;
                        l--;

                        // Skip duplicate elements for the third number
                        while(k < l && nums[k] == nums[k-1]) k++;

                        // Skip duplicate elements for the fourth number
                        while(k < l && nums[l] == nums[l+1]) l--;
                    }
                }
            }
        }
        return ans;  // Return the list of unique quadruplets
    }
};
