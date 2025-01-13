#include<iostream>
#include<queue>
#include<stack>
using namespace std;



bool   reverse_queue( queue<int> &q){
    stack<int> st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();

    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();

    }

return true  ;
}






int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    if(reverse_queue(q)){
        cout<<"Reversed :";
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();

          
        }
        
    }
    else{
        cout<<"Not Reversed"<<endl;
    }

    return 0;
}