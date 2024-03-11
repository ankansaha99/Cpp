 #include<iostream>
using namespace std;

class CircularQueue {
private:
    int front, rear, size;
    int *queue;

public:
    CircularQueue(int s) {
        size = s;
        front = rear = -1;
        queue = new int[size];
    }

    ~CircularQueue() {
        delete[] queue;
    }

    bool is_empty() {
        return front == -1;
    }

    bool is_full() {
        return (front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1));
    }

    void enqueue(int item) {
        if (is_full()) {
            cout << "Queue overflowed!!!" << endl;
        } else {
            if (is_empty()) {
                front = rear = 0;
            } else {
                rear = (rear + 1) % size;
            }
            queue[rear] = item;
            cout << "Enqueued " << item << " successfully." << endl;
        }
    }

    void dequeue() {
        if (is_empty()) {
            cout << "Queue is empty." << endl;
        } else {
            int removed_item = queue[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % size;
            }
            cout << "Dequeued " << removed_item << " successfully." << endl;
        }
    }

    void display() {
    if (is_empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue: ";
        for (int current_index = front; current_index != (rear + 1) % size; current_index = (current_index + 1) % size) {
            cout << queue[current_index] << " ";
        }
        cout << endl;
    }
}

};

int main() {
    int queue_size = 5;
    CircularQueue cq(queue_size);

    while (true) {
        cout << "\nWhat you want to do?" << endl;
        cout << "1. Enqueue element in the queue" << endl;
        cout << "2. Dequeue element from the queue" << endl;
        cout << "3. Display the queue" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice (1/2/3/4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                int element;
                cout << "Enter the element to enqueue: ";
                cin >> element;
                cq.enqueue(element);
                break;
            case 2:
                cq.dequeue();
                break;
            case 3:
                cq.display();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}
