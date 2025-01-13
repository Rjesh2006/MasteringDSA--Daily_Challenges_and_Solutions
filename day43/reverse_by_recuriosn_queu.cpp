#include <iostream>
#include<queue>
using namespace std;


void reverse_q_by_recurision(queue<int> &q){
    if(q.empty()){
        return;
    }


    int x = q.front();
    q.pop();
    reverse_q_by_recurision(q);
    q.push(x);

}








int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    reverse_q_by_recurision(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}


