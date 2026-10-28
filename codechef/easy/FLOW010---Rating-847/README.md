# FLOW010 - Rating 847

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Id and Ship

Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate
### Input Format

The first line contains an integer  **T**, the total number of testcases. Then  **T**  lines follow, each line contains a character.

### Output Format

For each test case, display the Ship Class depending on ID, in a new line.

### Constraints
- 1 ≤ T ≤ 1000
### Sample 1:
Input
Output

```
3 
B
c
D

```

```
BattleShip
Cruiser
Destroyer

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T11:29:33.604Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--){
	    char id;
	    cin >> id;
	    if (id == 'B' || id == 'b')
	        cout << "Battleship" << endl;
	    else if (id == 'C' || id == 'c')
	        cout << "Cruiser" << endl;
	    else if (id == 'D' || id == 'd')
	        cout << "Destroyer" << endl;
	    else if (id == 'F' || id == 'f')
	        cout << "Frigate" << endl;
	}
	return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FLOW010)