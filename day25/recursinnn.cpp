#include<iostream>
using namespace std;

int factorial(int num){
    if (num==0)
    {
      return 1;

    }


   return num*factorial(num-1);
    
    
}












int main(){

int *number=new int;
cout<<"enter the number here to find the factorial of that : ";
cin>>*number;

int fact_ans= factorial(*number);

cout<<"Here is the factorial of the given number :"<<fact_ans;



return 0;



}