#include <iostream>
using namespace std;

int main (){
    int binaryy_number;
    cout <<"enter the binary number: here:";
    cin >> binaryy_number;
     
    int ans=0 ;

    while (binaryy_number!0){
        unsigned int  bit=(1 &  binaryy_number);

        //cout<<"store is :"<<store;
        if (bit==1){
            cout <<"0";


        }
        else if (bit==0)
        {
                        cout <<"1";

        }
        
    binaryy_number>>=1;
        cout<<" ";

        
    }
    //cout<<binaryy_number;
    return 0;

}
