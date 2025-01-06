#include <iostream>
using namespace std;    
#include<stack>


void insert_sorted(stack<int> &st, int value){
    if (st.empty() || st.top() < value) {
        st.push(value);
        return;
    }

    int num = st.top();
    st.pop();

    insert_sorted(st, value);
    st.push(num);
}



void stack_sort(stack<int>&st){
    if(st.empty()){
        return ;
    };

    int num = st.top();
    st.pop();

    stack_sort(st);
    insert_sorted(st, num);

}



int main(){
stack<int> st;

st.push(3);
st.push(1);
st.push(-4);
st.push(2);

stack_sort(st);

cout << "Here we have the sorted stack elements: ";
while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
}
cout << endl;

    return 0;

}