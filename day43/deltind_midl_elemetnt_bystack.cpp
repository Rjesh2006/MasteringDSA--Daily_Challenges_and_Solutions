#include<iostream>
using namespace std;
#include<stack>



void middle_deletor(stack<int> &input_stack, int stack_size,int count ){
    int middle=stack_size/2;
    if (count==middle)
    {
        input_stack.pop();
        return ;

    }

    int num = input_stack.top();
    input_stack.pop();
    middle_deletor(input_stack, stack_size, count+1);
    input_stack.push(num) ;



    
}



int main(){
   
   int count= 0;
   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   int siz_stack=s.size();
   middle_deletor(s,siz_stack,count);
   cout<<"Here we have the stack without the middle element  :";
   while(!s.empty()){
     cout<<s.top()<<" ";
     s.pop();

};

return 0;
}