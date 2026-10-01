# Ugly Number II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

An  **ugly number**  is a positive integer whose prime factors are limited to `2`, `3`, and `5`.

Given an integer `n`, return  *the*  `nth`  ***ugly number** *.

 

 **Example 1:** 

```
Input: n = 10
Output: 12
Explanation: [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.

```

 **Example 2:** 

```
Input: n = 1
Output: 1
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.

```

 

 **Constraints:** 

- 1 <= n <= 1690

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 76.75%)  
**Memory:** 11.4 MB (beats 66.31%)  
**Submitted:** 2026-10-01T12:14:52.876Z  

```cpp
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);
        ugly[0] = 1;
        int prime2 = 0, prime3 = 0, prime5 = 0;

        for (int i = 1; i < n; i++) {
            int next2 = ugly[prime2] * 2;
            int next3 = ugly[prime3] * 3;
            int next5 = ugly[prime5] * 5;
            int nextUgly = min({next2, next3, next5});
            ugly[i] = nextUgly;
            if (nextUgly == next2) prime2++;
            if (nextUgly == next3) prime3++;
            if (nextUgly == next5) prime5++;
        }
        return ugly[n-1];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/ugly-number-ii/)