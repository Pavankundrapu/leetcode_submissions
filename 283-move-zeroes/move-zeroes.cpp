class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x = 0; // x points to the last found non-zero element
        for (int y = 0; y < nums.size(); y++) {
            if (nums[y] != 0) {
                swap(nums[x], nums[y]);
                x++;
            }
        }
    }
};
