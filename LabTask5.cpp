 #include <iostream>
using namespace std;

class Queue {
private:
    int MAX_SIZE = 6;
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {

        (front == -1 && rear == -1);{
        cout<< "True";
        }else{
        cout<<"False";

        }
    }

    bool isFull() {
        if (rear == MAX_SIZE ){
        cout<< "True";
        }else{
        cout<<"False";
        }
    }
/////
    void push(int val) {
        if (isFull()) {
            cout << "QUEUE FULL" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        arr[rear] = val;
    }

    void pop() {
        if (isEmpty()) {
            cout << "QUEUE EMPTY" << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "QUEUE EMPTY" << endl;
            return -1;
        }
        return arr[front];
    }

    void show() {
        if (isEmpty()) {
            cout << "QUEUE EMPTY" << endl;
            return;
        }
        int i = front;
        while (i != rear) {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout << arr[rear] << endl;
    }
};

int main() {
    Queue q;
    q.push(100);
    q.push(20);
    q.push(31);
    q.push(11);

    q.pop();
    q.pop();

    q.push(42);

    q.show();

    return 0;
}
