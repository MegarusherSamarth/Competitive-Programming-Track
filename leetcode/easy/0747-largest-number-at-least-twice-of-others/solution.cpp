class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int f_max = -1, s_max = -1;
        int x;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > f_max) {
                s_max = f_max;
                f_max = nums[i];
                x = i;
                cout << f_max << " " << s_max << endl;
            }
            else if (nums[i] > s_max) s_max = nums[i];
        }
        if (2 * s_max <= f_max) return x;
        return -1;
    }
};