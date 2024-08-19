class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low<=high)
        {
            mid = low+(high-low)/2;
            if(nums[mid] == target)
            {
                return true;
            }
            //check if duplicates present at extreme places
            else if(nums[low] == nums[mid] && nums[mid] == nums[high])
            {
                low++;
                high--;
            }
             //finding the sorted part
            else if(nums[low]<=nums[mid])
            { //check whether the elmenet lies in the sorted part
                if(nums[low]<=target && target<nums[mid])
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
            else
            {
                if(nums[mid]<target && target<=nums[high])
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        return false;
    }
};