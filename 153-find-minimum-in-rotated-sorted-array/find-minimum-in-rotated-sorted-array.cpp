class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        int small = nums[0];
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[low] <= nums[mid])
            {
                small = min(nums[low],small);
                low = mid+1;
            }
            else
            {
                small = min(nums[mid],small);
                high = mid-1;
            }
        }
        return small;
    }
};