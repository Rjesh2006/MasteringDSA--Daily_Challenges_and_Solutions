#include <iostream>
using namespace std;
int main(){
    int n ;
    cout <<"enter the n here :";
    cin>>n;
    int i =1;

    while(i<=n){
         //for the 0th triangle :
         int k=1;
         while(k<=n-i+1){
         cout <<k;

         k=k+1;
         }

        //for first triangle only with space

        // int space=n-i;
        // while(space){
        //     cout<<" ";
        // space=space -1;
        // }

          //second triangle4

        int j =1;
            while(j<=i-1){
               cout<<"*";
                   j+=1;

        }
        //third trinalge 
        int start =i-1;

        while(start){
            cout<<"*"<<" ";
            start =start -1;

        }


        int m=n-i+1;
        while (m>=1){
        cout<<m;
        m=m-1;

        }

    cout<<endl;
        i=i+1;

    }


    return 0;

    }
