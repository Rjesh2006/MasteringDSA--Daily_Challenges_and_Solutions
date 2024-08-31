#include<iostream>
using namespace std;






int power(int n){
    if (n==0)
    {
       return 1;

    }


    int recurser_relation=power(n-1);

    int logic= 2*recurser_relation;


    return logic;

    
}











int main (){

int n ;
cout<<" enter the number here :";
cin>>n;



int ans_sotrer= power(n);

cout<<"Here is the power of "<<n<<" is :"<<ans_sotrer;










    return 0;



}