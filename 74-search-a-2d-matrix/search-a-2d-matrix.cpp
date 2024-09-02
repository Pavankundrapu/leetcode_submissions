class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int low = 0;
        int high = row*col-1;
        int mid,i,j;
        while(low<=high)
        {
            mid = low+(high-low)/2;
            i = mid/col;
            j = mid%col;
            if(matrix[i][j] == target)
            {
                return true;
            }
            else if(matrix[i][j]>target)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return false;
    }
};