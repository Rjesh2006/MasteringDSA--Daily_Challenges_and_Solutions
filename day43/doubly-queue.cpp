#include <iostream>
using namespace std;

class Dqueue {
public:
    int* arr;
    int front;
    int rear;
    int size;

    Dqueue(int size1) {
        size = size1;
        arr = new int[size1];
        front = -1;
        rear = -1;
    }

    bool push_front(int x) {
        if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
            cout << "Overflow" << endl;
            return false;
        }
        if (front == -1 && rear == -1) {
            front = rear = 0;
        } else if (front == 0) {
            front = size - 1;
        } else {
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool push_rear(int x) {
        if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
            cout << "Overflow" << endl;
            return false;
        }
        if (front == -1 && rear == -1) {
            front = rear = 0;
        } else if (rear == size - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    bool pop_front() {
        if (front == -1) {
            cout << "Underflow" << endl;
            return false;
        }
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
        return true;
    }

    bool pop_rear() {
        if (rear == -1) {
            cout << "Underflow" << endl;
            return false;
        }
        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = size - 1;
        } else {
            rear--;
        }
        return true;
    }

    void printDeque() {
        if (front == -1) {
            cout << "Deque is empty" << endl;
            return;
        }
        int i = front;
        cout << "Deque elements: ";
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    Dqueue dq(5);

    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(50);

    dq.pop_front();
    dq.pop_rear();

    dq.push_front(60);
    dq.push_rear(70);

    dq.printDeque();

    return 0;
}
