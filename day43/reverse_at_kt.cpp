#include<iostream>
#include<queue>
#include<stack>
using namespace std;


queue<int> reverse_at_kth_posion_in_queue(queue<int> q, int k ){
    stack<int> st;
    int n = q.size();

    for (int  i = 0; i < k; i++)
    {
       st.push(q.front());
       q.pop();
    }

    for (int  i = 0; i < k; i++)
    {
       q.push(st.top());
       st.pop();
    }

for(int m = n-k; m< n; m++  ){
    int val= q.front();
    q.pop();
    q.push(val);

}


return q;

}


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(5);
    q.push(7);
    q.push(9);
    q.push(5);

    int k = 3; // Example value for k
    queue<int> result = reverse_at_kth_posion_in_queue(q, k);

    // Print the result queue
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;

    return 0;
}