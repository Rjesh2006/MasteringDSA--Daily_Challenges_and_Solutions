#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
 public:
        int data;
        Node* next;
        Node* back ;
  

         

//to add the node 
    Node( int value , Node* next1, Node* back1){
        next= next1;
        back =back1;
        data= value;

    }

// for the default contrutoor
    Node( int data2){
        data= data2;
        next=nullptr;
        back= nullptr;

    }


 
    
};


Node*  convert_list( vector<int> arr, int sizearr){
    Node* head= new Node( arr[0]);
    Node* previosu= head;
    int i =1;

    while (i <sizearr)
    {
      Node* temp= new Node( arr[i]);

      previosu->next=temp;
      previosu= temp;
      temp= temp->next;
      i++;

    }

    return head;

}


void printnode( Node* head){
    Node* temp= head;
    while (temp!=NULL)
    {
      cout<<temp->data<<" "<<endl;
      temp= temp-> next;

    
    }
    cout<<endl;


}

Node* findnode( Node * head,int  steptogetthenewhead){
    int i=1;
    while (head)
    {   
        if( i==steptogetthenewhead){
            return head;
        }
        i++;
        head=head->next;

    }
    return nullptr;

}




Node* Rotate_at_kthtimes( Node* head,int k){
 if(head==NULL||k==0)return head;

    Node* temp= head;
    int length=1;
    while (temp->next!=NULL)
    {
       temp=temp->next;
       length++;

    }
   
   temp->next= head;
    k = k % length;

Node* findlastnode= findnode(head,length-k);
head = findlastnode->next;

findlastnode->next=NULL;


return head;


}










int main(){
vector<int> arr={1,2,3,4,5};
Node* Head= new Node( 10);
int sizeof_arr= arr.size();

Head=convert_list( arr,sizeof_arr);
printnode(Head);
Head= Rotate_at_kthtimes( Head,2);
printnode( Head);

return 0;



}



