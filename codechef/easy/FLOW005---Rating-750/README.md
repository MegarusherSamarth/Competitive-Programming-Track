# FLOW005 - Rating 750

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Smallest Numbers of Notes

Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs.  **N**  is input, write a program to compute smallest number of notes that will combine to give Rs.  **N**.

### Input

The first line contains an integer  **T**, total number of testcases. Then follow  **T**  lines, each line contains an integer  **N**.

### Output

For each test case, display the smallest number of notes that will combine to give  **N**, in a new line.

### Constraints
- 1 ≤ T ≤ 1000
- 1 ≤ N ≤ 1000000
### Sample 1:
Input
Output

```
3 
1200
500
242
```

```
12
5
7
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T12:16:29.073Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = n % 100;
        int b = a % 50;
        int c = b % 10;
        int d = c % 5;
        int e = d % 2;
        cout << ((n/100) + (a/50) + (b/10) + (c/5) + (d/2) + e)<< endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FLOW005)