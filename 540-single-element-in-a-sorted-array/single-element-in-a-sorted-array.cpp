class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       if(nums.size() == 1)
       {
        return nums[0];
       } 
       if(nums[0] != nums[1])
       {
        return nums[0];
       }
       if(nums[nums.size()-1] != nums[nums.size()-2])
       {
        return nums[nums.size()-1];
       }//we are updating the low and high as we already checked for them
       int low = 2;
       int high = nums.size()-3;
       int mid;
       while(low<=high)
       {
        mid = low+(high-low)/2;
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
        {
            return nums[mid];
        }
        else if(mid%2 == 1)
        {
            if(nums[mid-1] == nums[mid])
            {
              low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }//now the mid is at even index
        else
        {
             if(nums[mid] == nums[mid+1])
             {
                low = mid+1;
             }
             else
             {
                high = mid-1;
             }
        }
       }
        return 0;
    }
};