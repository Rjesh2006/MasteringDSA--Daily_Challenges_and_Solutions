#include<iostream>
using namespace std;


class Queue{
public:

    int *arr;
    int front;
    int rear;
    int size ;
    int capacity;



    Queue(int capacity1 ){
        this->capacity=capacity1;
        arr= new int[capacity];
        front= 0;
        rear=-1;
        size=0;
    }


bool isempty(){
    return size== 0;
}


bool isfull(){
    return size==capacity;
}



void enqueue(int value){
    if(isfull()){
        cout<<" its full";
        return ;
    }


    rear= (rear+1 %capacity);//first shift the rear to the 0 then put this reaf to the arr as the index to detemine that rear will take care of the current value of the queue it always be increment firt then it wil go to the arry's index to assgn a vlaue at that inedex of queue(array u can say).
    arr[rear]=value;//now afer the rear increiment put value at the reared index.
    size++;//its only for the isfull fn 

}

int getfront(){
    if(isempty()){
        cout<<"nothing is here ";
        return -1;
    }

    return arr[front];
}


int deqeue(){
    if (isempty())
    {
       cout<<"nothing is here ";
       return -1;

    }

    int data= arr[front];
    front=(front+1)%capacity;//in taken the index o f the next vallued index because its have to tracked of the ahead one value of tte array
    size--;

  return data;

}



int getrear(){
    if(isempty()){
        cout<<"nothing is here ";
             return -1;
    }

    return arr[rear];
}


void display(){
    if(isempty()){
        cout<<"nothing is here";
        return ;
    }

    for (int i = 0; i <capacity; i++){//hre u can take also the size insted of the capacity 
        cout<<arr[front+i%capacity]<<" ";
    }
    cout<<endl;
}


};



int main(){
    Queue q(5);  

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<"display fn is called here ------->"<<endl;
    q.display();

    cout << "Dequeued: " << q.deqeue() << endl;
    cout<<"display fn is called here--------> "<<endl;
    q.display();

    cout << "Front element: " << q.getfront() << endl;
    cout << "Rear element: " << q.getrear() << endl;

    q.enqueue(60);
    cout<<"display fn is called here------- > "<<endl;
    q.display();

    return 0;


}
