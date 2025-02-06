class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        int count = 0;
        int sum = 0;
        //for negative sums the remainder would need to be normalized so this remainder ensures that all the remainders are under the 0 to k-1 values.
        int remainder;
        for(int i = 0;i<nums.size();i++)
        {
            sum += nums[i];
             remainder = ((sum%k)+k)%k;
            if(mpp.find(remainder) != mpp.end())
            {
                count+=mpp[remainder];
            }
            mpp[remainder]++;
        }
        return count;
    }
};