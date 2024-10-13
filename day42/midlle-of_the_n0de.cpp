#include<iostream>
#include<vector>
#include<stack>
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

Node* middle_list(Node* head){
    Node* slow =head;
    Node* fast=head->next;
    while (fast!=NULL && fast->next!=NULL)
    {
       slow=slow->next;
       fast=fast->next->next;

    }
    return slow;
  
    
}

int main(){
    vector<int> arr={ 2,35,33,4,6,5,8,9,1,4,8,79,5};
    Node* Head= new Node( 10);

    Head=converttoall2dll(arr);
    printnode(Head);
    Head=middle_list(Head);
   cout<<"The middle element is  : "<<Head->data<<endl;


}
