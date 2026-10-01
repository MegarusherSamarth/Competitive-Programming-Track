# Find Smallest Letter Greater Than Target

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array of characters `letters` that is sorted in  **non-decreasing order**, and a character `target`. There are  **at least two different**  characters in `letters`.

Return  *the smallest character in* `letters` *that is lexicographically greater than* `target`. If such a character does not exist, return the first character in `letters`.

 

 **Example 1:** 

```
Input: letters = ["c","f","j"], target = "a"
Output: "c"
Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.

```

 **Example 2:** 

```
Input: letters = ["c","f","j"], target = "c"
Output: "f"
Explanation: The smallest character that is lexicographically greater than 'c' in letters is 'f'.

```

 **Example 3:** 

```
Input: letters = ["x","x","y","y"], target = "z"
Output: "x"
Explanation: There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].

```

 

 **Constraints:** 

- 2 <= letters.length <= 104
- letters[i] is a lowercase English letter.
- letters is sorted in non-decreasing order.
- letters contains at least two different characters.
- target is a lowercase English letter.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 19.7 MB (beats 61.15%)  
**Submitted:** 2026-10-01T12:24:28.731Z  

```cpp
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = letters.size() - 1;
        // Binary search
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (letters[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        // Wrap around if no character is greater than target
        return left < letters.size() ? letters[left] : letters[0];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-smallest-letter-greater-than-target/)