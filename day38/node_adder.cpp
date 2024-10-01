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

Node* nodeaddfn(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* previos=head;
   
    for (int i = 1; i <arr.size(); i++)
    {
      Node* temp=new Node(arr[i]);
      previos->next=temp;
      temp->back=previos;
      previos=temp;

    }
    
    return head;

}

void printlinklist(Node* head){
    Node* temp=head;

while (temp!=NULL)
{
    cout<<temp->data<<"  ";
    temp=temp->next;
}
cout<<endl;

}

Node* nodeadderr(Node* heads1,Node* heads2){
    cout<<"here the function is called : + the sum of the linklists are:----------------------------------"<<endl;
    Node* temp1=heads1;
    Node* temp2 =heads2;
    Node* dummy_node=new Node(-1);
    Node* current=dummy_node;
    int carry=0;


    while (temp1!=NULL||temp2!=NULL)
    {   int sum=carry;
        if (temp1)
        {
          sum+=temp1->data;
          temp1=temp1->next;


        }

        if (temp2)
        {
          sum+=temp2->data;
          temp2=temp2->next;


        }

            Node* newnode=new Node(sum%10);
            carry=sum/10;
            current->next=newnode;


        current=current->next;


        
        
    }


    if (carry)
    {
        Node* newnode=new Node(carry);
        current=current->next;


    }
    
    return dummy_node->next;

}

int main(){
Node* Heads=new Node(10);
Node* Heads1=new Node(10);
Node* Heads3=new Node(10);


vector<int>arr1={4,7,1,3};
Heads1=nodeaddfn(arr1);
printlinklist(Heads1);
vector<int>arr0={2,4,5,5};
Heads=nodeaddfn(arr0);

printlinklist(Heads);
Heads3=nodeadderr(Heads,Heads1);
printlinklist(Heads3);

    return 0;

}
