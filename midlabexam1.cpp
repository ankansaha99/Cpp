#include <iostream>
using namespace std;

class Queue {
private:
    static const int MAX_SIZE = 7;
    int arr[MAX_SIZE];
    int front , rear;

public:
    Queue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    void push(int x) {
        if (!isFull()) {
            rear++;
            arr[rear] = x;
            cout << "PUSH into Queue " << x << endl;
        } else {
            cout << "QUEUE FULL" << endl;
        }
    }

    void pop() {
        if (!isEmpty()) {
            int y = arr[front];
            front++;
            cout << "POP into Queue: " << y << endl;
        } else {
            cout << "QUEUE EMPTY" << endl;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout <<"QUEUE EMPTY" << endl;
            return -1;
        }
        return arr[front];
    }

    void Show() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Remaining Elements in the QUEUE:"<< endl ;
            for (int i = front; i <= rear; i++) {
                cout << arr[i]<< " " ;
            }
        }
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

    cout<<endl;
    q.Show();
      cout<<endl; cout<<endl;cout<<endl;

    return 0;

}
