#include <iostream>
using namespace std;
#include <stack>

class TwoStack {
public:
    int *arr;
    int top1;
    int top2;
    int n;

    TwoStack(int size) {
        n = size;
        arr = new int[n];
        top1 = -1;
        top2 = n - 1;
    }

    void push1(int x) {
        if (top1 + 1 == top2) {
            return;
        } else {
            top1++;
            arr[top1] = x;
        }
    }

    void pop1() {
        if (top1 == -1) {
            return;
        } else {
            top1--;
        }
    }

    void push2(int x) {
        if (top2 - 1 == top1) {
            return;
        } else {
            top2--;
            arr[top2] = x;
        }
    }

    void pop2() {
        if (top2 == n) {
            return;
        } else {
            top2++;
        }
    }

    void Top1() {
        cout << arr[top1] << "\n";
    }

    void Top2() {
        cout << arr[top2] << "\n";
    }
};

int main() {
    TwoStack st(6);
    st.push1(45);
    st.push1(30);
    st.push2(60);
    st.push2(75);

    cout << "Top of Stack 1: ";
    st.Top1();

    cout << "Top of Stack 2: ";
    st.Top2();

    st.pop1();
    cout << "Top of Stack 1 after pop: ";
    st.Top1();

    st.pop2();
    cout << "Top of Stack 2 after pop: ";
    st.Top2();

    st.push2(75);
    cout << "Top of Stack 1: ";
    st.Top1();

    cout << "Top of Stack 2: ";
    st.Top2();

    st.pop1();
    cout << "Top of Stack 1 after pop: ";
    st.Top1();

    st.pop2();
    cout << "Top of Stack 2 after pop: ";
    st.Top2();

    return 0;
}
