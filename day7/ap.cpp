#include <iostream>
using namespace std;




int ap(int num){

    int nth=0;
    for (int i = 0; i<=num; i++)
    {
        nth=(3*num)+7;
        

    };
   // cout<<nth;

   return nth;



    
};















int main (){

    int n;
    cout<<"eter n :"; 
    cin>>n;
    cout<< " ";

    cout<<ap(n);

    return 0;


}