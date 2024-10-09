class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = 0;
        int y = 1;
        while(y<nums.size())
        {
            if(nums[y]>nums[x])
            {
                x++;
                nums[x] = nums[y];
            }
                y++;
        }
        return x+1;
    }
};