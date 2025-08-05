class Solution {
    public void setZeroes(int[][] matrix) {
        // Handle edge case of an empty or null matrix
        if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
            return;
        }

        int rows = matrix.length;
        int cols = matrix[0].length;
        
        // Use boolean arrays to mark which rows and columns to zero out.
        // They are initialized to 'false' by default.
        boolean[] rowToZero = new boolean[rows];
        boolean[] colToZero = new boolean[cols];

        // First pass: Iterate through the matrix to find all zeros.
        // Mark the corresponding rows and columns in the auxiliary arrays.
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    rowToZero[i] = true;
                    colToZero[j] = true;
                }
            }
        }

        // Second pass: Iterate through the matrix again.
        // Set cells to zero based on the auxiliary arrays.
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (rowToZero[i] || colToZero[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}