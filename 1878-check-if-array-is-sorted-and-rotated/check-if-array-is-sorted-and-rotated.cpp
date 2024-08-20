class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int break_count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                break_count++;
            }
        }

        // The array can have at most one break to be a sorted and rotated array.
        return break_count <= 1;
    }
};
