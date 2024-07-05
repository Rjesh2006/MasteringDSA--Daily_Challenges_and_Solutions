#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<< " enter the n here: ";
    cin>>n;
    cout <<"\n";
    int i =1;
        char ch= 'A' +i-1;



    while (i<=n){//this is for raw 
        int j=1;
        while (j<=i){//this is column (j)range depends on i 
        cout<<" "<<ch;
        ch+=1;
              

               j=j+1;



    }
     cout<<"\n";               

    i=i+1;
    }

}
