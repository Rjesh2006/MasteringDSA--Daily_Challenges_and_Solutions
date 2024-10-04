#include<iostream>
#include<vector>
#include<algorithm>
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

Node* adderfucntion(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;


    for (int i = 1; i < arr.size(); i++)
    {
       Node* temp=new Node(arr[i]);
       prev->next=temp;
       temp->back=prev;
       prev=temp;
       
    }
    return head;

}


void printhenode(Node* head){
cout<<"The node is conatainig this data now : "<<endl;
    while (head!=NULL)
    {
        cout<<head->data<<" ";
          head=head->next;
    }
    cout<<endl;

}

Node* removefrmnth_node(Node* head,int n){
    Node* dummy_node=new Node(0);
    dummy_node->next=head;
    Node* first=dummy_node;
    Node* second_=dummy_node;

    for (int i = 1; i <= n+1; i++)
    {
        first=first->next;

    }

    while (first!=NULL)
    {
        first=first->next;
        second_=second_->next;
    }
    Node* todeletenthnode=second_->next;
    delete todeletenthnode;
    second_->next=second_->next->next;

    return dummy_node->next;
    
}



int main(){
Node* Head=new Node(10);
vector<int> arr={2,3,4,5,7};
Head=adderfucntion(arr);
printhenode(Head);

Head=removefrmnth_node(Head,3);
printhenode(Head);
    return 0;

}
