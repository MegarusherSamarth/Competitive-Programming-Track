class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int temp = 0, count = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == 1){
                temp++;
                count = max(temp, count);
            } else {
                temp = 0;
            }
        }
        return count;
    }
};