# Valid Anagram

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

 

 **Example 1:** 

 **Input:**  s = "anagram", t = "nagaram"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "rat", t = "car"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length, t.length <= 5 * 104
- s and t consist of lowercase English letters.

 

 **Follow up:**  What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.7 MB (beats 47.81%)  
**Submitted:** 2026-10-01T12:13:57.654Z  

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> freq(26, 0);
        int n = s.length();
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for (int count : freq){
            if (count != 0) return false;
        }
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-anagram/)