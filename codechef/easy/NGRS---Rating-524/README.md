# NGRS - Rating 524

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### 50-50 Rule

Schools of Chefland use the $50-50$ rule to grade their students. As per the rule, students are awarded :

- Z grade, if their attendance is strictly less than $50\%$.
- F grade, if they score strictly less than $50\%$ marks, given that their attendance is greater than or equal to $50\%$.
- A grade, otherwise.

You are given two integers, $X$ and $Y$, denoting the percentage of attendance and percentage of marks obtained by Alice. What grade will Alice get?

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two space-separated integers $X$ and $Y$ — the percentage of attendance and percentage of marks obtained by Alice.
### Output Format

For each test case, output on a new line, the grade awarded to Alice.

Note that you may print the grade in lowercase or uppercase.

### Constraints
- $1 \leq T \leq 10^4$
- $1 \leq X, Y \leq 100$
### Sample 1:
Input
Output

```
4
49 100
49 49
50 49
50 50

```

```
Z
Z
F
A

```

### Explanation:

 **Test case $1$:**  Alice's attendance is less than $50\%$ so she will be awarded `Z` grade.

 **Test case $3$:**  Alice's attendance is equal to $50\%$ and her marks are less than $50\%$, so she will be awarded `F` grade.

 **Test case $4$:**  Alice's attendance is equal to $50\%$ and her marks are also equal to $50\%$, so she will be awarded `A` grade.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T05:38:05.519Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int x, y;
        cin >> x >> y;
        if (x < 50) cout << "Z" << endl;
        else if (x >= 50 && y < 50) cout << "F" << endl;
        else cout << "A" << endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/NGRS)