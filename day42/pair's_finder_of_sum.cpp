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



void  pairfinder(Node* head,int sum){
    if(head==NULL||head->next==NULL){
       cout<<"hai hi nahi to print kya hoga"<<endl;

        return   ; 
        

    }


    Node* temp=head;
    Node* smaller_node=head;
    bool finder=false;

    while (temp!=NULL)
    {
          smaller_node=head;
        while(smaller_node!=temp){
        if (smaller_node->data+ temp->data==sum)
        {
           finder=true;
           cout<<"the pairs are founded here  :" <<finder<<" The pair's are :-->  ( "<<smaller_node->data<<" ,"<< temp->data<<")"<<endl;

        }
        smaller_node=smaller_node->next;
        }

    temp=temp->next;

    }
    
if (!finder)
{
    cout<<"no pairs are found here try with the new list : "<<finder<<endl;
}



}

int main(){
    vector<int> arr={2,3,2,1,2,4,2,5,4,1};
    Node* Head=new Node(10);
    Head= Node_creation_to_the_list(arr);
    print_node(Head);

    int sum=5;
    pairfinder(Head,sum);
print_node(Head);
return 0;

}
