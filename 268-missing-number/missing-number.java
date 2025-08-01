class Solution {
    public int missingNumber(int[] nums) {
        int res = 0;
        for(int i = 0;i<nums.length;i++)
        {
            res = res^nums[i];
            res = res^i;
        }
        return res^nums.length;
    }
}