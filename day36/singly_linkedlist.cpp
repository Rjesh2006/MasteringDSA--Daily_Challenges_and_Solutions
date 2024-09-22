#include<iostream>
using namespace std;
#include <vector>

class Node {
    public:
        int data;
        Node* next;

//cratig the ocnstrrucotor here
        Node(int d, Node* next1){
            data = d;
            next=next1;
        }

        Node(int data){
            this->data=data;//always take the this keyword wwehen u wnna to use the classs member variable 
            next=nullptr;
        }
};

Node* nodeconcvet2all(vector<int> &arr){
        if (arr.empty()) return nullptr; // Check for empty vector
        Node* head=new Node(arr[0]);
        Node* mover=head;
        for (int i = 1; i < arr.size(); i++){
            Node*temp=new Node(arr[i]);//jisme aage ke  kel liye node banega 
            mover->next=temp;//yaha mover temp ke jagah pe ja rha hai  
            mover=mover->next;
        }
        return head;
}

Node* firstnode_headremove(Node* head){
    if (head ==NULL)
    {
        return head;
    }
    
    Node* temp=head;
    head=head->next;
        delete temp;
        return head;
}

//to print the available elements 
void printthelinklist(Node* head){
if (head==NULL)
{
    return ;
}
Node* temp=head;
int count=0;

while (temp!=nullptr){
       cout<<temp->data<<" ";
       temp=temp->next;
       count++;

       
}
cout<<endl<<"Now the  linklist that conatan total "<<count<<" NOde "<<endl;
}

//tail node deletion here
Node* taildelition(Node* head){
    if (head ==NULL||head->next==NULL)
    {
        return NULL;
    }
    Node* temp=head;
    while (temp->next->next!=NULL)
    {
       temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;

  
}

//any node deleteion funtio here 
  Node* remove_anynode(Node* head,int k){
    if (head==NULL)
    {
      return  head;

    }
    if (k==1)
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int count =0;
    Node* temp=head;
     Node* prev=NULL;


    while (temp!=NULL)
    {
        count++;
        if (count==k)
        {
           prev->next=temp->next;
           cout<<"here we have the pre-?next is    :"<<prev<<endl;
           free(temp);
           break;

        }
//this for if k is not equal you enter index elemtnit or node whic u wanna to delete
        prev=temp;
        cout<<" after here we have the prev.?next     "<<prev<<endl;
        temp=temp->next;

    }
    return head;
      
  }


int main(){
vector<int> arr={2,3,5,5};
Node*Heads = nodeconcvet2all(arr);
//Heads=remove(Heads);   //uncoomet thiis pfucntion to call ut it will onnly delte the head whichis the  first node

//here we wanna to deltee the secind last means that tail node from the linklist by the taireover fuction by putting the head onto that
Heads =taildelition(Heads);
printthelinklist(Heads);
Heads=remove_anynode(Heads,2);
printthelinklist(Heads);


    return 0;

}
