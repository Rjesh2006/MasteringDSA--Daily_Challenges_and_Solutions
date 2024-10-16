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

void  middle_delteor(Node* head){
    if (head==NULL||head->next==NULL)
    {
       return;

    }

    Node* slow=head;
    Node* faster=head;
    Node* previous=NULL;

    while(faster!=NULL&&faster->next!=NULL){
        previous=slow;

        slow=slow->next;
        faster=faster->next->next;

    }
    previous->next=slow->next;

    Node* middl_node=slow;

   delete slow;

    
}



int main(){
    Node* Head=new Node(10);
    vector<int> arr={2,3,5};
    Head=converttoall2dll(arr);
    printnode( Head);
    middle_delteor(Head);
    printnode(Head);


    return 0;



}
