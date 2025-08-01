class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> mp = new HashMap<>();
        int rem = 0;
        for(int i = 0;i<nums.length;i++)
        {
            rem = target-nums[i];
            if(mp.get(rem) != null)
            {
               return new int[]{mp.get(rem),i};
            }
            mp.put(nums[i],i);
        }
        //just dummy case;
        return new int[]{0,0}; 
    }
}