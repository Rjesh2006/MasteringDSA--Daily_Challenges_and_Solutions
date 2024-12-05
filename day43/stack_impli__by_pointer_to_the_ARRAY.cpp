#include<iostream>
using namespace std;

class Stack{
 public:
    int top ;
    int *arr;
    int size;


   Stack(int size){
    this->size= size;
    arr=new int[size];
   }

   void push(int element ){
    if (top<size)
    {  top++; 
     arr[top]=element;

    }else{
        cout<<"stack is not enough storage"<<endl;

    };
    
   };

   int  peek(){
    if (top>=-1 && top <size)
    {
       return arr[top];

    }else{
        cout<<"not have anything here "<<endl;

    }
    return 0;
    
    
  };


  void pop(){
    if (top>=0)
    {
        top--;

    }else{
        cout<<"you have nothig to looose here "<<endl;
    }
    
  }
;

bool empty(){
    if (top==-1 && size==0)
    {
        return true;
    }
  
   return  false;




}

};

int main(){
    Stack st(5);

    st.push( 450);
    st.push( 48);
    st.push( 4);
    st.push( 99);
    st.push(24);

 st.pop();
    
int thetopelement_=st.peek();
if (thetopelement_)
{
    cout<<thetopelement_<<endl;

}


int khali_hai=st.empty();
if (!khali_hai)
{
      cout<<"khali na hai "<<endl;

}else{
   cout<<"yeah its empty right now"<<endl;


}

cout<<endl;

 return 0;

}
