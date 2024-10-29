class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_product = nums[0]; // Stores the maximum product found so far
        int min_product = nums[0]; // Stores the minimum product found so far
        int result = nums[0];      // Result will hold the maximum product

        for (int i = 1; i < n; i++) {
            // If the current element is negative, swap max and min
            if (nums[i] < 0) {
                swap(max_product, min_product);
            }
            
            // Calculate the maximum and minimum product ending at the current position
            max_product = max(nums[i], max_product * nums[i]);
            min_product = min(nums[i], min_product * nums[i]);

            // Update result with the largest product found so far
            result = max(result, max_product);
        }

        return result;
    }
};
