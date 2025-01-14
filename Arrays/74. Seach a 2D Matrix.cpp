class Solution {
public:
    // Binary Search function to search a specific key in a given row
    bool bs(int r, vector<vector<int>>& arr, int low, int high, int key) {
        // While there is still a valid range to search
        while (low <= high) {
            int mid = (low + high) / 2; // Find the middle index of the current range
            
            // If the key is found at the middle element
            if (arr[r][mid] == key) {
                return true; // Return true if the key is found
            }
            // If the key is greater than the middle element, search in the right half
            else if (arr[r][mid] < key) {
                low = mid + 1;
            }
            // If the key is smaller than the middle element, search in the left half
            else if (arr[r][mid] > key) {
                high = mid - 1;
            }
        }
        return false; // Return false if the key is not found in the row
    }

    // Function to search for the target value in the 2D matrix
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); // Number of rows in the matrix
        int n = matrix[0].size(); // Number of columns in the matrix
        bool result = false; // Initialize result to false

        // Loop through each row of the matrix
        for (int i = 0; i < m; i++) {
            // Call binary search on the current row
            result = bs(i, matrix, 0, n - 1, target);
            
            // If the target is found in the current row, exit the loop early
            if (result == true) {
                break;
            }
        }

        // Return the result of the search (true if found, false otherwise)
        return result;
    }
};
