class Solution {
public:
    int bsearch(vector<int>& arr, int left, int right, int key) {
        while (left <= right) {
            int mid = left + (right - left) / 2;  // safer mid calculation
            if (arr[mid] == key) {
                return mid;
            } else if (arr[mid] < key) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1; // not found
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int part = 0, pos = -1, count = 0;

        // Handle the case where there's only one element
        if (n == 1) {
            return bsearch(nums, 0, 0, target);
        }

        // Find the index where the array is rotated (the part where nums[i] > nums[i+1])
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                part = i + 1;
                count = 1;
                break;
            }
        }

        if (count == 0) {
            // No rotation, the array is sorted, so search the whole array
            pos = bsearch(nums, 0, n - 1, target);
            return pos;
        }

        // First search in the left sorted part
        pos = bsearch(nums, 0, part - 1, target);
        if (pos != -1) {
            return pos;  // Found in the left part
        } else {
            // If not found, search in the right sorted part
            pos = bsearch(nums, part, n - 1, target);
        }

        return pos;  // Return the result from either part
    }
};
