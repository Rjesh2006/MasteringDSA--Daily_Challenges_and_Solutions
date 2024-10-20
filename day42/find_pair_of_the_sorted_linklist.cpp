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
Node* tailnode(Node* head) {
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    return tail;
}

void pairfinder_tc(Node* head, int sum) {
    if (head == NULL || head->next == NULL) {
        cout << "No pair exists here." << endl;
        return;
    }

    Node* left = head;
    Node* right = tailnode(head);

    while (left != NULL && right != NULL && left != right && left->back != right) {
        if (left->data + right->data == sum) {
            cout << "Pair found: " << left->data << " + " << right->data << " = " << sum << endl;
            left = left->next;
            right = right->back;
        } else if (left->data + right->data < sum) {
            left = left->next;
        } else {
            right = right->back;
        }
    }
}



int main(){
    vector<int> arr={1,2,3,4,5};
    Node* Head= new Node(10);
    Head= converttoall2dll(arr);
    printnode(Head);
    pairfinder_tc(Head,5);


}
