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



void Oddevensegregation(Node* head){
    Node* oddhead=head;
    Node* evenhead=head->next;

    Node* odd=oddhead;
    Node* even =evenhead;


    while (even !=NULL&& even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;



        even->next=odd->next;
        even=even->next;

    }
    odd->next=evenhead;


}




int main(){
   Node* Heads=new Node( 10);
   vector<int> arr={1,5,7,8,4,2,9 };
    Heads=converttoall2dll(arr);

    
    printnode(Heads);
    Oddevensegregation(Heads);
    printnode(Heads);
   
    

  

    return 0;

}
