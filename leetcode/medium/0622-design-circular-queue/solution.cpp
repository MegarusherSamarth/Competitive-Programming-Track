class MyCircularQueue {
    int* arr;
    int qfront;
    int rear;
    int size;
public:
    MyCircularQueue(int n) {
        arr = new int[n];
        rear = -1;
        qfront = -1;
        size = n;
    }    
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        if (isEmpty()) {
            qfront = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = value;
        return true;
    }
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        if (qfront == rear) {
            qfront = rear = -1;
        } else {
            qfront = (qfront + 1) % size;
        }
        return true;
    }    
    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return arr[qfront];
    }   
    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }    
    bool isEmpty() {
        return qfront == -1;
    }    
    bool isFull() {
        return (qfront == 0 && rear == size - 1) || (qfront == rear + 1);
    }
};
/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */