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
    void insert(ListNode* &head, ListNode* &tail, int data){
        ListNode* newNode = new ListNode (data);
        if(head == NULL){
            head = newNode;
            newNode->next = NULL;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->next = NULL;
            tail = newNode;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL , *tail = NULL;
        while(list1 != NULL && list2 != NULL){
            int data1 = list1->val, data2 = list2->val;
            if(data1 <= data2){
                insert(head,tail,data1);
                list1 = list1->next;
            }
            else{
                insert(head,tail,data2);
                list2 = list2->next;
            }
        }
        while(list1 != NULL){
            insert(head,tail,list1->val);
            list1 = list1->next;
        }
        while(list2 != NULL){
            insert(head,tail,list2->val);
            list2 = list2->next;
        }
        return head;
    }
};