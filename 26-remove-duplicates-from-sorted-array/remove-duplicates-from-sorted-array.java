class Solution {
    public int removeDuplicates(int[] nums) {
        int prev = Integer.MIN_VALUE;
        int i = 0;
        int j = 0;
        int count = 0;
        while(j<nums.length)
        {
            if(nums[j]>prev)
            {
                prev = nums[j];
                nums[i] = nums[j];
                i++;
                j++;
                count++;
            }
            else
            {
                j++;
            }
        }
        return count;
    }
}