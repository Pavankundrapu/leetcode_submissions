class Solution {
    public int first(int[] nums,int target)
    {
        int low = 0;
        int high = nums.length-1;
        int mid;
        int ans = -1;
        while(low<=high)
        {
            mid = low+(high-low)/2;
            if(nums[mid] >= target)
            {
                high = mid-1;
                if(nums[mid] == target)
                {
                    ans = mid;
                }
            }
            else
            {
                low = mid+1;
            }
        }
        return ans;
    }
       public int second(int[] nums,int target)
    {
        int low = 0;
        int high = nums.length-1;
        int mid;
        int ans = -1;
        while(low<=high)
        {
            mid = low+(high-low)/2;
            if(nums[mid] <= target)
            {
                low = mid+1;
                if(nums[mid] == target)
                {
                    ans = mid;
                }
            }
            else
            {
                high = mid-1;
            }
        }
        return ans;
    }
    public int[] searchRange(int[] nums, int target) {
        int fir = first(nums,target);
        if(fir == -1)
        {
            return new int[]{-1,-1}; 
        }
        int sec = second(nums,target);
        return new int[]{fir,sec};  
    }
}