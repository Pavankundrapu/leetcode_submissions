class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i = 0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        unordered_set<int> count;
        for(auto it : mpp)
        {
            if(count.find(it.second) != count.end())
            {
               return false;
            }
            count.insert(it.second);
        }
        return true;
        
    }
};