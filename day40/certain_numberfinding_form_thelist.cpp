#include<iostream>
#include<vector>
using namespace std;

class  Node {
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
Node* certain_numberinlist(Node* head){

   Node* zeroes_head=new Node(-1);
   Node* ones_head=new Node(-1);
   Node* twoes_head=new Node(-1);


   Node* zero=zeroes_head;
   Node* one=ones_head;
   Node* two=twoes_head;


   Node* temp=head;
   while (temp!=NULL)
   {
    if (temp->data=0)
    {
        zero->next=temp;
        zero=zero->next;
    }
    

    if (temp->data=1)
    {
        one->next=temp;
        one=one->next;
    }
    

    if (temp->data=0)
    {
       two->next=temp;
        two=two->next;
    }
    
   temp=temp->next;
    
   }
   
zero->next=(ones_head->next)? (ones_head->next): (twoes_head->next);
one->next=twoes_head->next;
two->next=NULL;


Node* newHead=zeroes_head->next;




return newHead;


delete zeroes_head;
delete ones_head;
delete twoes_head;
delete newHead;


}

int main(){
vector<int> arr={0,1,2,0,0,1,2,2};
Node* Heads=new Node(10);
Heads=converttoall2dll(arr);
Heads=certain_numberinlist(Heads);
printnode(Heads);

    return 0;

}