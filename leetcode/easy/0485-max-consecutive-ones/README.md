# Max Consecutive Ones

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a binary array `nums`, return  *the maximum number of consecutive* `1` *'s in the array*.

 

 **Example 1:** 

```
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

```

 **Example 2:** 

```
Input: nums = [1,0,1,1,0,1]
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- nums[i] is either 0 or 1.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 18.01%)  
**Memory:** 50 MB (beats 92.91%)  
**Submitted:** 2026-10-01T12:20:04.244Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/max-consecutive-ones/)