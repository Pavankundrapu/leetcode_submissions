class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        stack<int>st;
        int x;
        for(int i = 2*n-1 ; i >= 0 ;i--)
        {
             x = i%n;
             if(i>=n)
             {
                 while(!st.empty() && nums[x] >= st.top())
                 {
                    st.pop();
                 }
                 st.push(nums[x]);
             }
             else
             {
                  while(!st.empty() && nums[x] >= st.top())
                 {
                    st.pop();
                 }
                 if(st.empty())
                 {
                    ans[x] = -1;
                 }
                 else
                 {
                    ans[x] = st.top();
                 }
                 st.push(nums[x]);
             }
        }
        return ans;
        
    }
};