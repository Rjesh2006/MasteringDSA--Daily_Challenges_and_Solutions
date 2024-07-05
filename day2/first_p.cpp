// character pattern
#include<iostream>
using namespace std;
int main (){
    int n=4;
    cout<<"\n";
    int row=1;
    while (row<=n){
      int col=1;
        while(col<=n){
          char ch='A'+row-1;
          cout<<(ch);
          col+=1;

    }
    cout<<"\n";
     row+=1;
    }
    
    return 0;
}
