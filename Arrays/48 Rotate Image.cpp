class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();           // Number of rows (and columns, since it's a square matrix)
        int n = matrix[0].size();        // Number of columns

        // Step 1: Transpose the matrix
        // Swap elements across the diagonal (i.e., matrix[i][j] with matrix[j][i])
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < m; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        // After transposing, reversing each row gives a 90-degree clockwise rotation
        for (int i = 0; i < m; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
