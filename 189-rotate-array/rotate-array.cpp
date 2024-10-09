class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        vector<int> temp;
        for(int i = n-k;i<n;i++)
        {
            temp.push_back(nums[i]);
        }
        int z = n-1;
        for(int i = n-k-1;i>=0;i--)
        {
            nums[z] = nums[i];
            z--;
        }
        for(int i = 0;i<temp.size();i++)
        {
            nums[i] = temp[i];
        }
    }
};