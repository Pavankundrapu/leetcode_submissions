class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
         int left = 0;
         int curr = 0;
         int maxL = 0;
         for(int right = 0;right<nums.length;right++)
         {
            if(nums[right] == 1)
            {
                curr++;
            }
            else
            {
                maxL = Math.max(maxL,curr);
                curr = 0;
            }
         }
         maxL = Math.max(maxL,curr);
         return maxL;
    }
}