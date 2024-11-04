#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();  // Get the size of the input array
        vector<vector<int>> ans;  // Initialize a 2D vector to store the result triplets

        // Sort the array to use the two-pointer technique
        sort(nums.begin(), nums.end());

        // Loop through the array, considering each element as a potential first element of a triplet
        for (int i = 0; i < n; i++) {

            // Skip duplicate values for the first element to avoid duplicate triplets in the result
            if (i != 0 && nums[i] == nums[i - 1]) continue;

            // Initialize two pointers:
            // j (left pointer) starting just after i
            // k (right pointer) starting at the end of the array
            int j = i + 1;
            int k = n - 1;

            // While the left pointer is less than the right pointer
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];  // Calculate the sum of the triplet

                if (sum < 0) {
                    // If the sum is less than zero, we need a larger number
                    // Move the left pointer (j) to the right
                    j++;
                } else if (sum > 0) {
                    // If the sum is greater than zero, we need a smaller number
                    // Move the right pointer (k) to the left
                    k--;
                } else {
                    // If the sum is zero, we found a valid triplet
                    vector<int> temp = {nums[i], nums[j], nums[k]};  // Create the triplet
                    ans.push_back(temp);  // Add the triplet to the result

                    // Move both pointers to continue searching for other possible triplets
                    j++;
                    k--;

                    // Skip duplicate values for the second element to avoid duplicate triplets
                    while (j < k && nums[j] == nums[j - 1]) j++;

                    // Skip duplicate values for the third element to avoid duplicate triplets
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }

        // Return the list of unique triplets that sum to zero
        return ans;
    }
};
