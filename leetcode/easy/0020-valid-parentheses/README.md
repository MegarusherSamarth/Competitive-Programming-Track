# Valid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

 

 **Example 1:** 

 **Input:**  s = "()"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "()[]{}"

 **Output:**  true

 **Example 3:** 

 **Input:**  s = "(]"

 **Output:**  false

 **Example 4:** 

 **Input:**  s = "([])"

 **Output:**  true

 **Example 5:** 

 **Input:**  s = "([)]"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length <= 104
- s consists of parentheses only '()[]{}'.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.9 MB  
**Submitted:** 2026-10-01T11:35:31.523Z  

```cpp
class Solution {
public:
bool isValid(string x) {
    stack<char>s;
    for(int i=0;i<x.size();i++){
        if(!s.empty() and s.top()=='(' and x[i]==')')s.pop();
        else if(!s.empty() and s.top()=='[' and x[i]==']')s.pop();
        else if(!s.empty() and s.top()=='{' and x[i]=='}')s.pop();
        else s.push(x[i]);
    }
    return s.size()==0;
  }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-parentheses/)