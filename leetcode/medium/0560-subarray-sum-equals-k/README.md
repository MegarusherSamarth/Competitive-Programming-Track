# Subarray Sum Equals K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `k`, return  *the total number of subarrays whose sum equals to*  `k`.

A subarray is a contiguous  **non-empty**  sequence of elements within an array.

 

 **Example 1:** 

```
Input: nums = [1,1,1], k = 2
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,2,3], k = 3
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -1000 <= nums[i] <= 1000
- -107 <= k <= 107

## Solution

**Language:** C++  
**Runtime:** 2488 ms (beats 11.52%)  
**Memory:** 34.4 MB (beats 88.29%)  
**Submitted:** 2026-10-01T12:21:30.017Z  

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for (int start = 0; start < n; start++){
            int sum = 0;
            for (int end = start; end < n; end++){
                sum += nums[end];
                if (sum == k){
                    count++;
                }
            }
        }
        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)