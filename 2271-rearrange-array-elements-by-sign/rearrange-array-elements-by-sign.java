class Solution {
    public int[] rearrangeArray(int[] nums) {
        int[] pos = new int[nums.length/2];
        int[] neg = new int[nums.length/2];
        int x = 0,y = 0;
        for(int i = 0;i<nums.length;i++)
        {
            if(nums[i] > 0)
            {
               pos[x] = nums[i];
               x++;
            }
            else
            {
                neg[y] = nums[i];
                y++;
            }
        }
        boolean flag = true;
        x = 0;
        y = 0;
        for(int i = 0;i<nums.length;i++)
        {
            if(flag == true)
            {
                nums[i] = pos[x];
                x++;
                flag = false;
            }
            else
            {
                nums[i] = neg[y];
                y++;
                flag = true;
            }
        }
        return nums;
    }
}