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
        for (int i = 1; i < arr.size(); i++)
        {
            Node*temp=new Node(arr[i]);//jisme aage ke  kel liye node banega 
            mover->next=temp;//yaha mover temp ke jagah pe ja rha hai  
            mover=temp;

        }

        return head;

}



int main(){
vector<int> arr={2,3,5,5};
Node* head = nodeconcvet2all(arr);
cout<<"here is the heads data is : "<<head->data<<endl;
    cout << "Here is the head's next : " << (head->next ? head->next->data : 0) << endl;


    return 0;

}
