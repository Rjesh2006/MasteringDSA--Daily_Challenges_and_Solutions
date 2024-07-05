#include <iostream>
using namespace std;
# include <math.h>

int main (){
    int n ;
    cout <<" enter the n here:";
    cin>>n;
    cout <<endl;
    int i =0;
    int ans=-0;
    while (i <=30){
         ans =pow(2,i);
        if (ans ==n){
            cout<<"true"<<ans ;
            cout <<"  ";

        }
        cout<<" ";

        cout <<" false "<<ans ;


        i++;

        cout<<" ";
    }

    return 0;
}