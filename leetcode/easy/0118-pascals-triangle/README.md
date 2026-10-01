# Pascal's Triangle

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `numRows`, return the first numRows of  **Pascal's triangle**.

In  **Pascal's triangle**, each number is the sum of the two numbers directly above it as shown:

 

 **Example 1:** 

```
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

```

 **Example 2:** 

```
Input: numRows = 1
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= numRows <= 30

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.6 MB (beats 60.82%)  
**Submitted:** 2026-10-01T11:49:47.105Z  

```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p(numRows);
        for (int i = 0; i < numRows; i++) {
            // p.resize(i)
            p[i].resize(i+1);
            p[i][0] = 1;
            p[i][i] = 1;
            for (int j = 1; j < i; j++) {
                p[i][j] = p[i-1][j-1] + p[i-1][j];
            }
        }
        return p;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/pascals-triangle/)