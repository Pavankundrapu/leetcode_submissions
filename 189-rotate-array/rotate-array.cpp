class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); 
        k = k%n;
        vector<int> ans;
        for(int i = n-k;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        int z = n-1;
        for(int y = n-k-1;y>=0;y--)
        {
            nums[z] = nums[y];
            z--;
        }
        for(int i = 0;i<k;i++)
        {
            nums[i] = ans[i];
        }
    }
};