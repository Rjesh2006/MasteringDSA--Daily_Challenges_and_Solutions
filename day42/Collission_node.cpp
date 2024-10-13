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



Node* node_clossion(Node* head1,Node* head2){
    if (head1==nullptr||head2==nullptr)
    {
        return nullptr;
    }
    
    Node* temp1= head1;
    Node* temp2=head2;

    while (temp1!=temp2)
    {
        temp1=temp1->next;
        temp2=temp2->next;


        if (temp1==temp2)
        {
            return temp1;

        }

        if (temp1==NULL)
        {
            temp1=head2;
        }

        if (temp2==NULL)
        {
            temp2=head1;
        }
        
        
    }
return temp1;
}




int main(){

    vector<int> arr={2,3,4,5,4,2,3};
    vector<int> arr2={2,3,4,3};
    Node* Head= new Node ( 10);
    Node* Head2=new Node( 10);

    Head=converttoall2dll(arr);
    Head2=converttoall2dll(arr2);

    printnode(Head);
    printnode(Head2);
    Head2==node_clossion(Head,Head2);

    if (node_clossion)
    {
        cout<<"the node is colided at the node with the value is :"<<Head2->data<<endl;
    }else{
        cout<<"No collision is accurs here ------try with the differ node "<<endl;
        
    }
    
return 0;


}
