#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class  Node {
    public:
         int data;
         Node* next;
         Node* back;
         Node* random;


    Node(int data1,Node* next1,Node*prev1,Node* randm){
        data=data1;
        next=next1;
        back=prev1;
        random= randm;


    }

    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
        random=nullptr;
    }
};
/////////////////////////////////
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
//////////
void printnode(Node* heads){
    Node* temp=heads;
    while (temp!=NULL)
    {
       cout<<temp->data<<" ";
       temp=temp->next;

    }

cout<<endl;

}

Node* insert_copyNode(Node* head){
    
    Node* temp= head;
    while(temp){
    Node* copynode=new Node(temp->data);
    Node* temp_next_nextnode=temp->next;

    copynode->next= temp_next_nextnode;
    temp->next=copynode;

   temp= temp_next_nextnode;

    
    }

    return head;


}



Node* connect_to_the_random(Node* head){
    Node* temp= head;

    
    while (temp)
    {

    Node* copynode=temp->next;


        if(temp->random) {
            copynode->random= temp->random;


        }else{
            copynode->random=nullptr;

        }
       temp=temp->next->next;


    }
    return head;

}


Node* seprater_copied_list_from_themain_list(Node* head){
Node*temp= head;
Node* Dummynode= new Node(-1);
Node* res= Dummynode;
while (temp)
{
    res->next=temp->next;
    res=res->next;

    temp->next= temp->next->next;

    temp= temp->next;


}
return Dummynode->next;


}


Node* clone_ll_by_a_random_node(Node* head){
    insert_copyNode(head);
    connect_to_the_random(head);
    seprater_copied_list_from_themain_list(head);



return head;

}







int main(){

    vector<int> arr={2,3,4,5,4,2,3};
    Node* Head= new Node ( 10);

    Head=converttoall2dll(arr);
    printnode(Head);
    Head=clone_ll_by_a_random_node(Head);
    printnode(Head);




    return 0;
}
