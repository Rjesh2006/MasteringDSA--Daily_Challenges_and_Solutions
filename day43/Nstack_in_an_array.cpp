#include<iostream>
#include<stack>
using namespace std;

class Node {
public:
    int index;
    Node* next;

    Node(int values) {
        index = values;
        next = nullptr;
    }

    Node(int data1, Node* next1) {
        index = data1;
        next = next1;
    }
};

class Nstack {
public:
    Node** top;
    int* arr;
    stack<int> st;

    Nstack(int ns, int size) {
        top = new Node*[ns];
        arr = new int[size];
        for (int i = 0; i < ns; i++) {
            top[i] = nullptr;
        }
        for (int i = 0; i < size; i++) {
            st.push(i);
        }
    }

    bool push(int n_stack_number, int value) {
        if (st.empty()) {
            return false;
        }

        arr[st.top()] = value;
        Node* newnode = new Node(st.top());
        newnode->next = top[n_stack_number - 1];
        top[n_stack_number - 1] = newnode;
        st.pop();
        return true;
    }


    bool pop(int n_stack_number){
        if(top[n_stack_number-1]==nullptr){
            return false;
        }

        Node* del_node=top[n_stack_number-1];
        st.push(del_node->index);
        top[n_stack_number-1]=top[n_stack_number-1]->next;
        delete del_node;
        return true;
    }

};

int main() {
    Nstack nstack(3, 10);
    cout << "Pushing values into stacks:" << endl;
    cout << "Push 5 into stack 1: " << (nstack.push(1, 5) ? "Success" : "Failure") << endl;
    cout << "Push 10 into stack 2: " << (nstack.push(2, 10) ? "Success" : "Failure") << endl;
    cout << "Push 15 into stack 3: " << (nstack.push(3, 15) ? "Success" : "Failure") << endl;

    cout << "Popping values from stacks:" << endl;
    cout << "Pop from stack 1: " << (nstack.pop(1) ? "Success" : "Failure") << endl;
    cout << "Pop from stack 2: " << (nstack.pop(2) ? "Success" : "Failure") << endl;
    cout << "Pop from stack 3: " << (nstack.pop(3) ? "Success" : "Failure") << endl;

    return 0;
}
