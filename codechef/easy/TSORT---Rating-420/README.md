# TSORT - Rating 420

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Simple Sorting

Given a list of numbers, you have to sort them in non decreasing order.

### Input Format
- The first line contains a single integer, $N$, denoting the number of integers in the list.
- The next $N$ lines contain a single integer each, denoting the elements of the list.
### Output Format

Output $N$ lines, containing one integer each, in non-decreasing order.

### Constraints
- $1 \leq N \leq 10^6$
- $0 \leq$ elements of the list $\leq 10^6$
### Sample 1:
Input
Output

```
5
5
3
6
7
1
```

```
1
3
5
6
7
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T10:51:39.414Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <int> num(N);
    for (int i = 0; i < N; i++){
        cin >> num[i];
    }
    sort(num.begin(), num.end());
    for (int i = 0; i < N; i++){
        cout << num[i] << endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/TSORT)