class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];
        int current = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(current < 0)
            {
                current = 0;
            }
            current += nums[i];
            maxi = max(maxi,current);
        }
        return maxi;
    }
};