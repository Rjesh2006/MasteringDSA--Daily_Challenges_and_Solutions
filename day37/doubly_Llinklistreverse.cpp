#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>


using namespace std;

class Node{
    public:
        Node* next;
        Node* back;
        int data;



        Node(int data1,Node* next1,Node*bacck1){
            data=data1;
            next=next1;
            back=bacck1;

        }
        Node(int data1){
            data=data1;
            next=nullptr;
            back=nullptr;
        }
};

//this function not commony in used bacause the timecompllesity it taken o(2n) so we have to wretie a different question.

Node* reverse_the_ddl(Node* head){
    if (!head) return nullptr; 
    stack<int> st;
    Node* temp=head;
    while (temp!=NULL)
    {
        st.push(temp->data);

        temp=temp->next;

    }
temp=head;

 while (temp!=NULL)
    {
        temp->data=st.top();
          st.pop();
        temp=temp->next;

    }

return head;

}

Node* converttoall2dll(vector<int> &arr){
  Node* head = new Node(arr[0]);
  Node* prev = head;
  for (int i = 1; i < arr.size(); i++) { 
    Node* temp = new Node(arr[i]);
    prev->next = temp;
    temp->back = prev;
    prev = temp;
  }
  return head;
}

void print(Node* head){
    Node* temp =head;
    while (temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;
}



Node* reversethe_lesstimecomlesxity(Node* head){
    if (head==NULL||head->next==NULL)
    {
       return head;
    }
   Node* previous=NULL;

    Node* current=head;
   while (current!=NULL)
   {
       current->back=current->next;
       current->next=previous;

       current=current->back;


   }
   
return previous->back;

    
}




















int main(){
Node* Heads=new Node(10);
vector<int>arr={23,44,5,5};
 Heads=converttoall2dll(arr);
 Heads= reversethe_lesstimecomlesxity(Heads);
print(Heads);


//printinf the linklist here;

    return 0;

}