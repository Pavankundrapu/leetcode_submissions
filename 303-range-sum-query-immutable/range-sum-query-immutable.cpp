class NumArray {
public:
    vector<int> PrefixSum;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        PrefixSum.resize(n+1,0);
        for(int i = 0 ;i<PrefixSum.size()-1;i++)
        {
            PrefixSum[i+1] = nums[i] + PrefixSum[i];
        }
    }
    
    int sumRange(int left, int right) {
        return PrefixSum[right+1]-PrefixSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */