class Solution {
    private void findcomb(int index,int target,int[] arr,List<List<Integer>> ans,List<Integer> ds)
    {
        if(index == arr.length)
        {
            if(target == 0)
            {
                ans.add(new ArrayList<>(ds));
            }
            return;
        }
        if(arr[index] <= target)
        {   //pick condition
            ds.add(arr[index]);
            findcomb(index,target-arr[index],arr,ans,ds);
            ds.remove(ds.size()-1);
        }
        findcomb(index+1,target,arr,ans,ds);
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        findcomb(0,target,candidates,ans,new ArrayList<>());
        return ans;
        
    }
}