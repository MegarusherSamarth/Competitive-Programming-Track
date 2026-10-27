# ADVITIYA2 - Rating 453

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Judged

The tech fest of IIT Ropar,  *Advitiya*, has a talent show as part of the festivities.
The preliminary round of the talent show has participants being evaluated by $5$ judges, and only those participants whose performance was liked by  **at least $4$**  judges will qualify for the next round.

Anuj participated in the talent show, and now wants to know if he'll qualify or not.
You are given the responses of all $5$ judges — help Anuj decide whether he qualified!
Each judge's response is given to you as a binary integer, where:

- $0$ means the judge didn't like Anuj's performance.
- $1$ means the judge liked Anuj's performance.
### Input Format
- The first line of input contains a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line containing $5$ space-separated integers $R_1, R_2, R_3, R_4, R_5$ — the responses of the judges.
### Output Format

For each test case, output a single line containing the string `"YES"` (without quotes) if Anuj qualifies for the next round, and `"NO"` (without quotes) if he doesn't qualify.

Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings `NO`, `no`, `No`, and `nO` will all be treated as equivalent.

### Constraints
- $1 \le T \le 100$
- $0 \le R_1, R_2, R_3, R_4, R_5 \le 1$
### Sample 1:
Input
Output

```
3
1 0 0 0 1
1 1 0 0 1
0 1 1 1 1

```

```
NO
NO
YES
```

### Explanation:

 **Test case $1$:**  Only $2$ judges liked Anuj's performance, so he does not qualify.

 **Test case $2$:**  Only $3$ judges liked Anuj's performance, so he does not qualify.

 **Test case $3$:**  $4$ judges liked Anuj's performance, so he does qualify this time.

- In the second case, only $3$ judges liked his performance so he does not qualify.
- In the third case, $4$ judges liked his performance so he qualified.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T14:02:44.840Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int arr[5];
        int count_1 = 0;
        for(int i = 0; i < 5; i++){
            cin >> arr[i];
            if (arr[i] == 1) count_1++;
        }
        if (count_1 >= 4) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ADVITIYA2)