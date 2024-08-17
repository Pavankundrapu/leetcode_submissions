class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }
        int cnt = 1;
        int large = 1;
        unordered_set<int> mpp;
        for(int i = 0;i<nums.size();i++)
        {
            mpp.insert(nums[i]);
        }
        for(auto it: mpp)
        {
            if(mpp.find(it-1) == mpp.end())
            {   int x = it;
                cnt = 1;
                while(mpp.find(x+1) != mpp.end())
                {   x = x+1;
                    cnt++;
                    
                }
                large = max(large,cnt);
            }
        }
        return large;
    }
};