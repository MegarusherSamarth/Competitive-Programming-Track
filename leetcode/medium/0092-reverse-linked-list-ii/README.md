# Reverse Linked List II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `head` of a singly linked list and two integers `left` and `right` where `left <= right`, reverse the nodes of the list from position `left` to position `right`, and return  *the reversed list*.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]

```

 **Example 2:** 

```
Input: head = [5], left = 1, right = 1
Output: [5]

```

 

 **Constraints:** 

- The number of nodes in the list is n.
- 1 <= n <= 500
- -500 <= Node.val <= 500
- 1 <= left <= right <= n

 

 **Follow up:**  Could you do it in one pass?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.1 MB (beats 71.44%)  
**Submitted:** 2026-10-01T11:48:47.855Z  

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)
        return head;
        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* temp;
        while(cur!=NULL)
        {
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }  
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
        return head;
        ListNode* dummy=new ListNode(-600);
        dummy->next=head;
        ListNode* temp1;
        ListNode* temp2;
        ListNode* temp=dummy;
        int l=left,r=right;
        while(temp)
        {
            l--;
            r--;
            if(l==0)
            temp1=temp;
            if(r==0)
            temp2=temp;
            temp=temp->next;
        }
        ListNode* end=temp2->next->next;
        ListNode* newh=temp1->next;
        temp1->next=NULL;
        temp2->next->next=NULL;
        newh=reverseList(newh);
        temp1->next=newh;
        while(newh->next)
        {
            newh=newh->next;
        }
        newh->next=end;
        return dummy->next;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-linked-list-ii/)