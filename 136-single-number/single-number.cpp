class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int digit = 0;
       for(int i = 0;i<nums.size();i++)
       {
         digit =digit^nums[i];
       } 
       return digit;
    }
};