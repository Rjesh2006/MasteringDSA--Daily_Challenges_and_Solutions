#include <iostream>
using namespace std;





void  setbitcounter(int num1, int num2){

    int add = num1 + num2;
    cout <<endl;

    cout <<" here we have the total | bit in add :";

    cout <<"add is :"<<add<<endl<<endl;
     while (add!=0){
    int bits = add &1;
    if ( bits ==1){
        cout<< bits ;
    }

    add>>=1;
    
}


};





int main(){
    int a ,b;
    cout <<" Enter a and b here:";
    cin>>a>>b;
    cout <<" ";

    setbitcounter(a,b);

    // return none;




}
