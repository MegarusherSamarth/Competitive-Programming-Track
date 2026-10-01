# Maximum Average Subarray I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` consisting of `n` elements, and an integer `k`.

Find a contiguous subarray whose  **length is equal to**  `k` that has the maximum average value and return  *this value*. Any answer with a calculation error less than `10-5` will be accepted.

 

 **Example 1:** 

```
Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

```

 **Example 2:** 

```
Input: nums = [5], k = 1
Output: 5.00000

```

 

 **Constraints:** 

- n == nums.length
- 1 <= k <= n <= 105
- -104 <= nums[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 45.77%)  
**Memory:** 113.9 MB (beats 26.85%)  
**Submitted:** 2026-10-01T12:22:48.917Z  

```cpp
class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int n = arr.size();
        int window=0;
        for (int i=0; i<k; i++){
            window += arr[i];
        }
        int result = window;
        for (int j=k; j<n; j++){
            window += arr[j] - arr[j-k];
            result = max(result, window);
        }
        double sum = (double)result / k;
        return sum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-average-subarray-i/)