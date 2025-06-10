class Solution {
    void generate(int i,int[] nums,List<List<Integer>> ls,List<Integer> ds)
    {
        if(i == nums.length)
        {
            ls.add(new ArrayList<>(ds));
            return;
        }
        ds.add(nums[i]);
        generate(i+1,nums,ls,ds);
        ds.remove(ds.size()-1);
        generate(i+1,nums,ls,ds);
    }
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ls = new ArrayList<>();
        generate(0,nums,ls,new ArrayList<>());
        return ls; 
    }
}