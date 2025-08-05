class Solution {
    public void setZeroes(int[][] matrix) {
        if(matrix == null || matrix.length == 0 || matrix[0].length == 0)
        return;

        int row = matrix.length;
        int cols = matrix[0].length;

        boolean rowsto[] = new boolean[row];
        boolean colsto[] = new boolean[cols];

        for(int i = 0;i<row;i++)
        {
            for(int j = 0;j<cols;j++)
            {
                if(matrix[i][j] == 0)
                {
                    rowsto[i] = true;
                    colsto[j] = true;
                }
            }
        }

        for(int i = 0;i<row;i++)
        {
            for(int j = 0;j<cols;j++)
            {
                if(rowsto[i] || colsto[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}