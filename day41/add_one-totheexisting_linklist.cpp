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

///////////////////////////////////////////
int helper(Node*temp){
   

    if (temp==nullptr)
    {
        return 1;

    }

    int carry =helper(temp->next);

    temp->data+=carry;
    if (temp->data<10)
    {
       return 0;
    }
    temp->data=1;
    return 1;

    
}


////////////////////////////
Node* add_1(Node* head){
    if (head==NULL||head->next==NULL)
    {
       return head;

    }
int carry=helper(head->next);//it wil give o and 1  .tshi fucntin will check that other node can takethis 1 or will it be go further to add this with as node if it will possibilbe (means that the node is samller then the 10 if not so it mean that the last node is also not smeller thatn 10 so it say to adddd that 1 to the front of the list thats why we created that newnode to add that 1 ass the first node and let head as the newnode )
if (carry==1)
{
Node* newnode=new Node(1);
 newnode=head->next;
 head=newnode;

}

return head;//if the head or head next is null then simply return null.or if o it will also return the head simply there is nothing to add in list

    
}






//////////////////////////
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
////////
void printnode(Node* heads){
    Node* temp=heads;
    while (temp!=NULL)
    {
       cout<<temp->data<<" ";
       temp=temp->next;

    }

cout<<endl;

}



int main(){
Node* Head=new Node(10);
vector<int> arr={1,2,3,4};
Head=converttoall2dll(arr);
printnode(Head);
Head=add_1(Head);
printnode(Head);

    return 0;

}
