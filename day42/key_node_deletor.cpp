#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class  Node {
    public:
         int data;
         Node* next;
         Node* back;

//its for creating the new node efficintly allso asssign the() data ,next,prev ,pointer to that node as parameter .
    Node(int data1,Node* next1,Node*prev1){
        data=data1;
        next=next1;
        back=prev1;

    }
//its only to creat the head Node initially where we have.nt any node at next or peeche to hoga hi nahi .
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
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

void printnode(Node* heads){
    Node* temp=heads;
    while (temp!=NULL)
    {
       cout<<temp->data<<" ";
       temp=temp->next;

    }

cout<<endl;
}


Node* key_node_deletor(Node* head,int key){
    cout<<"Here we have the left node's which contains the data : ";
  if(head==NULL||head->next==NULL) return NULL;

  Node* temp=head;
  Node* previous=NULL;
 while (temp!=NULL)
 {



     if (temp->data==key)
     {
                if (temp==head) {
                    head=head->next;

                }
      

       Node* nextnode=temp->next;
       Node* previous=temp->back;

       if (nextnode)
       {
        nextnode->back=previous;

       }
       if (previous)
       {

       previous->next=nextnode;

       }


       free(temp);
       temp=nextnode;

      
     


     }
     else{
        temp=temp->next;
        
       }
     

 }
 
return head;

}




int main(){
    int key=2;
    vector<int> arr={2,4,2,3,4,2};
    Node* Head=new Node(10);
    Head=converttoall2dll(arr);
    printnode(Head);
    Head=key_node_deletor(Head,key);
    printnode(Head);

}
