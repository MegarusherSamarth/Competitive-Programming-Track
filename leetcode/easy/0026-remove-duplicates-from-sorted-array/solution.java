class Solution {
    public int removeDuplicates(int[] nums) {
        int i;
        if (nums.length == 0) return 0;
        int idx = 1;
        for (i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i-1]) {
                nums[idx] = nums[i];
                idx++;
            }
        }
        return idx;
    }
}