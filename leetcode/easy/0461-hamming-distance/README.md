# Hamming Distance

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers `x` and `y`, return  *the  **Hamming distance**  between them*.

 

 **Example 1:** 

```
Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.

```

 **Example 2:** 

```
Input: x = 3, y = 1
Output: 1

```

 

 **Constraints:** 

- 0 <= x, y <= 231 - 1

 

 **Note:**  This question is the same as 2220: Minimum Bit Flips to Convert Number.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8 MB (beats 4.60%)  
**Submitted:** 2026-10-01T12:19:41.118Z  

```cpp
class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = x ^ y;
        int dis = 0;
        while (result != 0){
            dis += result & 1;
            result >>= 1;
        }
        return dis;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/hamming-distance/)