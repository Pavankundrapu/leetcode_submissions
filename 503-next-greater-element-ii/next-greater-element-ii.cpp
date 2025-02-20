class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int count;
        int temp;
        for(int i = 0;i<nums.size();i++)
        {
            count = 0;
            temp = -1;
            while(count< n)
            {
                if(nums[(count+i+1)%n] > nums[i])
                {   
                    temp = nums[(count+i+1)%n];
                    break; 
                }
                else
                {
                    count++;
                }
            }
            ans[i] = temp;
        }
        return ans;
    }
};