# Largest Number At Least Twice of Others

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` where the largest integer is  **unique**.

Determine whether the largest element in the array is  **at least twice**  as much as every other number in the array. If it is, return  *the  **index**  of the largest element, or return* `-1` *otherwise*.

 

 **Example 1:** 

```
Input: nums = [3,6,1,0]
Output: 1
Explanation: 6 is the largest integer.
For every other number in the array x, 6 is at least twice as big as x.
The index of value 6 is 1, so we return 1.

```

 **Example 2:** 

```
Input: nums = [1,2,3,4]
Output: -1
Explanation: 4 is less than twice the value of 3, so we return -1.

```

 

 **Constraints:** 

- 2 <= nums.length <= 50
- 0 <= nums[i] <= 100
- The largest element in nums is unique.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 1.72%)  
**Memory:** 13.9 MB (beats 12.29%)  
**Submitted:** 2026-10-01T12:25:50.656Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/largest-number-at-least-twice-of-others/)