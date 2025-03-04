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

bool loop_detector_(Node* head){
    if (head==NULL||head->next==NULL)
    {
       return false;

    }
    
    Node*faster_temp=head;
    Node* slowe_temp=head;
    while (faster_temp!=NULL&&faster_temp->next!=NULL)
    {
        slowe_temp=slowe_temp->next;
        faster_temp=faster_temp->next->next;

        if(slowe_temp==faster_temp) return true;
    }
    return false;

    


    
}


int main(){
    vector<int> arr={23,5,5,3,2,2};
    Node* Head=new Node(10);
    Head=converttoall2dll(arr);
    printnode(Head);
   if (loop_detector_(Head))
   {
    cout<<"the linklist gone for the looping bro.... "<<endl;
   } else{
    cout<<"not in loop"<<endl;

   }
   
   
   
   
    


}
