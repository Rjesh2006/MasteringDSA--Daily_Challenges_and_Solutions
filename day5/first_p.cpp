#include<iostream>
using namespace std;
#include <math.h>


int main (){
    long long n ;
    cout <<"Enter n here which u want to convert in binary digit's:";
    cin>>n;
    cout<<endl;
      int ans=0;
          int i =0;
        cout <<"Ans is initialized by :"<<ans<<endl;



    while(n!=0){
        int bit=n&1;
        ans = (bit*pow(10 ,i))+ans;
         
        cout<<"incrimeted :"<<" "<<ans<<endl;

        n= n>>1;
        i++;


    };
    cout<<endl;
    cout<<"Your number is converted in biinary digit's :"<<ans<<endl;
}
