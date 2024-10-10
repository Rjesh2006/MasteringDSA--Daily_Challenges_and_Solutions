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


bool  isspallinderme(Node* head){
stack<int> st;
Node* temp =head;
while (temp)
{  
    st.push(temp->data);
   temp=temp->next;

}
temp=head;


while(temp!=NULL){
if(temp->data !=st.top()) return false;
 
temp=temp->next;
   st.pop();
 }


return true;


}





int main(){


    vector<int>arr={1,1,1,1,1};
    Node* Heads=new Node(10);
    Heads=converttoall2dll(arr);
   isspallinderme(Heads);
   cout<<isspallinderme(Heads);
}






