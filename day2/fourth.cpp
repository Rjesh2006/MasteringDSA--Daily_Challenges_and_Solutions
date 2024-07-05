#include <iostream>
using namespace std;
int main (){
    int n ;
    cout << " Enter ur n here:";
    cin>>n;
    cout<<"\n";
    cout<<"your  order for the pattern : "<<n<<"*"<<n<<"\n";
    int i=1;

     int count=1;

    while(i<=n){//raw incremeents loop 
        int j=1;
        int space=n-i+1;
        while (space)
        {
         cout<<" ";
            space =space -1;
        };

        while (j<=i){//column incriment loop means assigning * as for each coloumn of particular raw
            cout<<count;//here we changed the * pattern to the number pattern by replacing * by 1 whih is incrimenting also so that we assigned incrimentwing i instead *
           
           count+=1;
            j=j+1;

        }
        cout<<endl;
        i +=1;
    }
    return 0;

}
