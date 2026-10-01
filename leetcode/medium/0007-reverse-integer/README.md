# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.6 MB (beats 54.27%)  
**Submitted:** 2026-10-01T09:32:20.719Z  

```cpp
class Solution {
public:
    int reverse(int x) {
        long int d = 0, r = 0;
        while (x != 0){
        d = x % 10;
        r = r * 10 + d;
        x = x / 10;
        }
        if ((r > INT_MAX) || (r < INT_MIN)) return 0;
        else return r;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)