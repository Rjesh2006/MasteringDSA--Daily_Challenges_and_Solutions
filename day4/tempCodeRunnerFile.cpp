#include <iostream>
using namespace std;


void bit_counter(int n){
    int count =0;
    while(n!=0){
        if(n&1 ){
            count ++;

        }
        n=n>>1;

    }
cout<<count;
    
};



int main(){
int num;
cout <<"enter the n here:";
    cin>>num;
    bit_counter(num);

    return 0;
}