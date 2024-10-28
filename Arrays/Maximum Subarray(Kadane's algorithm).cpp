class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0]; // Initialize maximum subarray sum with the first element
        int sum = 0; // Initialize current sum to zero

        for (int i = 0; i < n; i++) {
            sum = sum + nums[i]; // Add current element to the current sum
            
            if (sum < 0) { // If the current sum is negative,
                sum = 0;   // reset it to zero (ignore negative sums)
            }
            
            maxi = max(sum, maxi); // Update maximum if current sum is greater
        }
        
        return maxi; // Return the maximum subarray sum found
    }
};

