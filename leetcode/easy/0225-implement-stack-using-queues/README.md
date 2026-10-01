# Implement Stack using Queues

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (`push`, `top`, `pop`, and `empty`).

Implement the `MyStack` class:

- void push(int x) Pushes element x to the top of the stack.
- int pop() Removes the element on the top of the stack and returns it.
- int top() Returns the element on the top of the stack.
- boolean empty() Returns true if the stack is empty, false otherwise.

 **Notes:** 

- You must use only standard operations of a queue, which means that only push to back, peek/pop from front, size and is empty operations are valid.
- Depending on your language, the queue may not be supported natively. You may simulate a queue using a list or deque (double-ended queue) as long as you use only a queue's standard operations.

 

 **Example 1:** 

```
Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 2, 2, false]

Explanation
MyStack myStack = new MyStack();
myStack.push(1);
myStack.push(2);
myStack.top(); // return 2
myStack.pop(); // return 2
myStack.empty(); // return False

```

 

 **Constraints:** 

- 1 <= x <= 9
- At most 100 calls will be made to push, pop, top, and empty.
- All the calls to pop and top are valid.

 

 **Follow-up:**  Can you implement the stack using only one queue?

## Solution

**Language:** C  
**Runtime:** 0 ms  
**Memory:** 8.8 MB  
**Submitted:** 2026-10-01T12:11:36.533Z  

```c
struct queueNode{
    int data;
};
typedef struct {
    struct queueNode *arr[101];
    int front;
    int rear;    
} MyStack;
MyStack* myStackCreate() {
    MyStack *q =(MyStack *)malloc(sizeof(MyStack));
    q->front=-1;
    q->rear=-1;
    return q;
}
void enqueue(MyStack* q, struct queueNode* item) {
    q->arr[++q->rear] = item;
    if (q->front == -1) {
        q->front = 0;
    }
}
struct queueNode* dequeue(MyStack* q) {    
    struct queueNode* item = q->arr[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    return item;
}
void myStackPush(MyStack* q, int x) {  
  struct queueNode* node = (struct queueNode*) malloc(sizeof(struct queueNode));
    node->data = x;
    enqueue(q, node);
    int size = q->rear - q->front + 1;
    while (size > 1) {
        struct queueNode* front = dequeue(q);
        enqueue(q, front);
        size--;
    }
}
int myStackPop(MyStack* q) {
    struct queueNode* front = dequeue(q);
    int item = front->data;
    free(front);
    return item;
}
int myStackTop(MyStack* q) {
     struct queueNode* front = q->arr[q->front];
    return front->data;
}
bool myStackEmpty(MyStack* q) {
  return q->front == -1;
}
void myStackFree(MyStack* q) {
     while (!myStackEmpty(q)) {
        struct queueNode* front = dequeue(q);
        free(front);
    }
    free(q);
}
```

---

[View on LeetCode](https://leetcode.com/problems/implement-stack-using-queues/)