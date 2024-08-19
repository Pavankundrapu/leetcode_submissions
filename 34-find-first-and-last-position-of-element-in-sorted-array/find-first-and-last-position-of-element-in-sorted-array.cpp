int first(vector<int>& nums,int target)
{
    int low = 0;
    int high = nums.size()-1;
    int mid;
    int pos = -1;
    while(low<=high)
    { 
        mid= low+(high-low)/2;
        if(nums[mid]>=target)
        {
           high = mid-1;
           if(nums[mid] == target)
           {
                 pos = mid;
           }
            
        }
        else
        {
           low = mid+1;
        } 
    }
     return pos;
}

int second(vector<int>& nums,int target)
{
    int low = 0;
    int high = nums.size()-1;
    int mid;
    int pos = -1;
    while(low<=high)
    { 
        mid= low+(high-low)/2;
        if(nums[mid]<=target)
        {
           low = mid+1;
           if(nums[mid] == target)
           {
             pos = mid;
           }
           
        }
        else
        {
           high = mid-1;
        }
    }
    return pos;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int count1 = first(nums,target);
        if(count1 == -1)
        {
            return {-1,-1};
        }
        int count2 = second(nums,target);
        return {count1,count2};
    }
};