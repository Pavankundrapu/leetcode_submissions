class Solution {
public:
    int find(vector<vector<int>>& mat,int rows,int cols,int currentcol)
    {
        int max = -1;
        int row = 0;
        for(int i = 0;i<rows;i++)
        {
            if(mat[i][currentcol] > max)
            {
                max = mat[i][currentcol];
                row = i;
            }
        }
        return row;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int low = 0;
        int high = cols-1;
        int mid,left,right,row;

        while(low<=high)
        {
            mid = (low+high)/2;
            //row give the index where the max element is present
            row = find(mat,rows,cols,mid);
            left = mid-1>=0?mat[row][mid-1]:-1;
            right = mid+1<cols?mat[row][mid+1]:-1;
            if(mat[row][mid]>left && mat[row][mid]>right)
            {
                return {row,mid};
            }
            else if(mat[row][mid]<left)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return {-1,-1};
    }
};