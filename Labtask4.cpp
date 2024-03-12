#include <iostream>
using namespace std;
#define MAX_SIZE 5

class Stack {
private:
    int top;
    int stack[MAX_SIZE];

public:
    Stack() {
        top=-1;
    }

    bool isEmpty() {
        return (top==-1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int val) {
        if (isFull()) {
            cout << "STACK FULL" << endl;
            return;
        }
        stack[++top] = val;
    }

    void pop() {
        if (isEmpty()) {
            cout << "STACK EMPTY" << endl;
            return;
        }
        top--;
    }

    int getTop() {
        if (isEmpty()) {
            cout << "STACK EMPTY" << endl;
            return -1;
        }
        return stack[top];
    }

    void show() {
        if (isEmpty()) {
            cout << "STACK EMPTY" << endl;
            return;
        }
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack st;

    st.push(100);
    st.push(20);
    st.push(31);
    st.push(11);

    st.pop();
    st.pop();

    st.push(42);

    st.pop();
    st.show();

    return 0;
}
