class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 'j' will keep track of the index for unique elements
        int j = 0;
        // 'n' is the size of the input vector
        int n = nums.size();
        
        // If there's only one element, no duplicates to remove
        if (n == 1) {
            nums[j] = nums[0];  // No change needed, just assign the first element
            j++;  // Move the index pointer
            return j;  // Return 1, as there's only one unique element
        }
        
        // Loop through the vector starting from the second element
        for (int i = 1; i < n; i++) {
            // If 'i' is 1, assign the first element to nums[j] and increment j
            if (i == 1) {
                nums[j] = nums[0];
                j++;
            }
            
            // If the current element is different from the previous one (i.e., unique), update the 'nums' array
            if (nums[i - 1] != nums[i]) {
                nums[j] = nums[i];  // Assign the unique element to the 'nums' array
                j++;  // Increment the index pointer to keep track of unique elements
            } else {  
                continue;  // Skip the duplicate element
            }
        }
        
        // Return the count of unique elements
        return j;
    }
};
