#include<iostream>
using namespace std;
#include<algorithm>



class Circular_Queue{
  public:
    int rear,front;
    int size;
    int *arr;

  Circular_Queue(int sizee){
        size=sizee;
        arr=new int[size];
        rear= -1;
        front=-1;
    }

 void enqueue(int value){
    if ( (rear+1) % size==front)   //whens the rear and will be same then ciruclar is ends there.
    {
      cout<<"queue is full";
      return ;
    }
    if(front==-1){
      front=0;
    }

    rear=(rear+1)%size;
    arr[rear]=value;
    cout<<"value is enqueued is here :"<<arr[rear]<<endl;



}


void dequeue(){
    if(front==-1||front > rear){
          cout<<"queue is empty here "<<endl;
          return ;

    }
    if(front==rear){
      front,rear=-1;

    }

            front=(front+1)%size;

    
    cout<<"value is dequeued here :"<<arr[front]<<endl;
    return ;

}


void front_element(){
  cout<<"here front :"<<arr[front]<<endl;
}
    


 void display(){
    if (front==-1|| front>rear)
    { 
      cout<<"nothign has to print"<<endl;
      return;
    }

    int i = front;
    cout<<"here we have the elemtns left in the array : ";
    while ( i!=rear)
    {
          cout<<arr[i]<<" ";
          i=(i+1) % size;
     }
    cout<<arr[rear];
  }

};


int main(){

Circular_Queue cq(5);
cq.enqueue(6);
cq.front_element();
cq.enqueue(77);
cq.enqueue(77);
cq.enqueue(77);
cq.enqueue(444);
cq.dequeue();
cq.dequeue();


cq.front_element();


cq.display();
   


return 0;

}
