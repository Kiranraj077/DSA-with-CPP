class Solution {
public:
    
    // Function to find the minimum element in a rotated sorted array
    int findMin(vector<int>& nums) {
        // Get the size of the array
        int n = nums.size();
        
        // Variables to track the partition index and minimum value
        int part, ans;
        
        // Loop through the array to find the point of rotation
        for (int i = 0; i < n - 1; i++) {
            // If the current element is greater than the next, 
            // this indicates the point where the array was rotated
            if (nums[i] > nums[i + 1]) {
                part = i + 1; // The rotation point is at i + 1
            }
        }
        
        // After identifying the rotation point, 
        // compare the first element (nums[0]) and the element at the rotation point 
        // to determine the minimum element in the array
        ans = min(nums[0], nums[part]);
        
        // Return the minimum element found
        return ans;
    }
};
