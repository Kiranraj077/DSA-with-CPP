class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(); // Get the number of elements in the array
        long area = 0, res = 0; // Initialize area and maximum area (res) to 0
        int l = 0; // Left pointer starting at the beginning of the array
        int r = n - 1; // Right pointer starting at the end of the array

        // Loop until the two pointers meet
        while (l < r) {
            // Calculate the area formed by the lines at l and r
            area = (r - l) * min(height[l], height[r]);

            // Update the maximum area found so far
            res = max(res, area);

            // Move the pointer corresponding to the smaller height
            if (height[l] < height[r]) {
                l++; // Move left pointer to the right
            } else if (height[l] > height[r]) {
                r--; // Move right pointer to the left
            } else {
                r--; // If heights are equal, move the right pointer
            }
        }

        // Return the maximum area
        return res;
    }
};
//TC:0(n)
