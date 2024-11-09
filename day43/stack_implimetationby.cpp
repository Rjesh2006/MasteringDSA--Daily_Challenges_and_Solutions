#include<iostream>
#include<vector>
using namespace std;



class Node {
    public:
         int data;
         Node* next;
         Node* back;

    Node(int data1,Node* next1,Node*prev1){
        data=data1;
        next=next1;
        back=prev1;

    }

    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};




class Stack{
 private:
   Node* top;
    

 public:

   Stack():top(nullptr){}


   void push( int value ){
    Node* newnode=new Node(value);
    newnode->next= top;
    top = newnode;
   }

   int peek(){
    if (isempty())
    {  cout<<"no elements exisat here"<<endl;

        return -1;

    }
     cout<<endl<<"here we have the peek element of the stack :--> "<<top->data<<""<<endl;

   return top->data;
   
   }



   void pop(){
    if(isempty()){
        cout<<"stack is empty here"<<endl;
                return ;
    }
    Node* temp= top;
    top = top->next;
    delete temp;

   }
 


bool isempty(){
   return top ==nullptr;

}


 void display(){
    Node* temp=top;
    while (temp)
    { 
        cout<<temp->data<<" "<<endl;
        temp= temp->next;

    }
    

    

}


~Stack() {
        while (!isempty()) {
            pop();
        }
    }

};








int main(){
    Stack st;
    st.push( 1);
    st.push(45);
    st.push(45);
    st.push(45);
    st.push(45);




   
st.display();
 st.pop();
st.peek();
    
return 0;

}
