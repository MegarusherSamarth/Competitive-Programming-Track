# DECINC - Rating 520

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Decrement OR Increment

Write a program to obtain a number $N$ and increment its value by 1 if the number is divisible by 4 $otherwise$ decrement its value by 1.

### Input Format

First line will contain a number $N$.

### Output Format

Output a single line, the new value of the number.

### Constraints
- $0 \leq N \leq 1000$
### Sample 1:
Input
Output

```
5
```

```
4
```

### Explanation:

Since 5 is not divisible by 4 hence, its value is decreased by 1.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T04:56:43.335Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num % 4 == 0) num++;
    else num--;
    cout << num;
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DECINC)