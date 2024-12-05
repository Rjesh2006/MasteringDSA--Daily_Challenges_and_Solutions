#include<iostream>
using namespace std;

 class Node{
    public:
    int data;
    Node *next;

    Node(int values){
        data=values;
        next=nullptr;

    }

        Node(int data1,Node* next1){
            data=data1;
            next=next1;
        }
    
 };



 class Stack{
    public:
     Node*top;

       Stack(){
        top=nullptr;

       };



    void push(int value){
          
          Node* newnode=new Node(value);
          newnode->next= top;
          top = newnode;
          cout<<"data pushed :"<<top->data;
          cout<<endl;


    }

    void pop(){
        Node* deltor_curren_stack=top;
        cout<<"Popped :"<<top->data;
        top= top->next;
        delete deltor_curren_stack;
            
    }


   void peek(){
    if(isempty()){
       cout<<"stack nothig have anything "<<endl;
        return ;

    }
    cout<<"The peek is :"<<top->data<<endl;

    }


    bool isempty(){
        if(top==nullptr){
            cout<<"stack is empty here";
            return true;

        }
        return false;
    }


  
    void display_stack(){
        cout<<"Now the left elment's in the stack are  :";
        Node* temp= top;
        while (temp)
        {
        cout<<"  "<<temp->data;
        temp= temp->next;

        }
        cout<<endl;

       
      
    }


~Stack() {
        while (!isempty()) {
            pop();
        }
    }

}

    

 };


 int main(){
    Stack st;
    st.push(45);
    st.push(5);
    st.push(895);
    st.push(66);
    st.push(1);
    cout<<endl;
    st.display_stack();

    st.pop();
    cout<<endl;
    st.peek();
    st.push(100);

    st.display_stack();


    return 0;
     
 }
