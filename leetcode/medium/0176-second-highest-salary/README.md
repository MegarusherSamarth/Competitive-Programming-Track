# Second Highest Salary

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Table: `Employee`

```
+-------------+------+
| Column Name | Type |
+-------------+------+
| id          | int  |
| salary      | int  |
+-------------+------+
id is the primary key (column with unique values) for this table.
Each row of this table contains information about the salary of an employee.

```

 

Write a solution to find the second highest  **distinct**  salary from the `Employee` table. If there is no second highest salary, return `null (return None in Pandas)`.

The result format is in the following example.

 

 **Example 1:** 

```
Input: 
Employee table:
+----+--------+
| id | salary |
+----+--------+
| 1  | 100    |
| 2  | 200    |
| 3  | 300    |
+----+--------+
Output: 
+---------------------+
| SecondHighestSalary |
+---------------------+
| 200                 |
+---------------------+

```

 **Example 2:** 

```
Input: 
Employee table:
+----+--------+
| id | salary |
+----+--------+
| 1  | 100    |
+----+--------+
Output: 
+---------------------+
| SecondHighestSalary |
+---------------------+
| null                |
+---------------------+

```

## Solution

**Language:** SQL  
**Runtime:** 280 ms (beats 77.44%)  
**Memory:** 0B (beats 100.00%)  
**Submitted:** 2026-10-01T12:07:02.493Z  

```sql
select ifnull((
    select distinct Salary
    from Employee
    order by Salary desc
    limit 1 offset 1), 
    null)
as SecondHighestSalary;
```

---

[View on LeetCode](https://leetcode.com/problems/second-highest-salary/)