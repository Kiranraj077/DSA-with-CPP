class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();     // Number of rows in the matrix
        int n = matrix[0].size();  // Number of columns in the matrix
        
        // Arrays to track rows and columns that need to be set to zero
        vector<int> carr(n); // Column marker array
        vector<int> rarr(m); // Row marker array
        
        // Initialize the row and column marker arrays to 0
        for (int i = 0; i < n; i++) {
            carr[i] = 0; // Initialize column markers
        }
        for (int i = 0; i < m; i++) {
            rarr[i] = 0; // Initialize row markers
        }
        
        // First pass: Identify rows and columns that contain at least one zero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) { // If a zero is found
                    rarr[i] = 1;         // Mark the row
                    carr[j] = 1;         // Mark the column
                }
            }
        }
        
        // Second pass: Set rows to zero based on the row marker array
        for (int i = 0; i < m; i++) {
            if (rarr[i] == 1) { // If this row is marked
                for (int j = 0; j < n; j++) {
                    matrix[i][j] = 0; // Set all elements in the row to zero
                }
            }
        }
        
        // Third pass: Set columns to zero based on the column marker array
        for (int i = 0; i < n; i++) {
            if (carr[i] == 1) { // If this column is marked
                for (int j = 0; j < m; j++) {
                    matrix[j][i] = 0; // Set all elements in the column to zero
                }
            }
        }
    }
};

//TC:O(mn)
//sc:O(m+n)
