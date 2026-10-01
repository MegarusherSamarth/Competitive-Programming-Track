class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0, left = 0;
        int right;
        for (int i = 0; i < n; i++) total += nums[i];
        for (int i = 0; i < n; i++) {
            right = total - left - nums[i];
            if (left == right) return i;
            left += nums[i];
        }
        return -1;
    }
};