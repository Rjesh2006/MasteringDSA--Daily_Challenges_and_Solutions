#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


class Node{
 
 public:


    Node* next;
    Node* back;
    int data;


Node(int val, Node* next1, Node* back1){
  data= val;
  next=next1;
  back=back1;


}

Node(int val){
  data= val;
  next=nullptr;
  back=nullptr;


}
};
///////////////////////////////////////
Node* Node_creation_to_the_list(vector<int> arr){
    if(arr.empty())return nullptr;
    Node* head=new Node(arr[0]);
    Node* prev=head;

    for (int i = 1; i <arr.size(); i++)
    {
       Node* temp=new Node(arr[i]);
       prev->next=temp;
       temp->back=prev;
       prev=temp;
       
    }
return head;
}


//////////
void print_node(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
    cout<<endl;

}


//////////////////////////////////////////////////////
Node* list_rever_reursion(Node* head){
    if (head==NULL||head->next==NULL)
    {
        return head;

    }

    Node* newhead=list_rever_reursion(head->next); 

    Node* front=head->next;
    front->next=head;
    head->next= NULL;



    

    return newhead;

    
}


int main(){
Node* Head=new Node(10);
vector<int>arr={1,2,3,4};
Head=Node_creation_to_the_list(arr);
cout<<"here we have  the node's are : "<<endl;
print_node(Head);
Head=list_rever_reursion(Head);
cout<<"after the reverse fuccntion called here is the node's are : "<<endl;
print_node(Head);



    return 0;

}
