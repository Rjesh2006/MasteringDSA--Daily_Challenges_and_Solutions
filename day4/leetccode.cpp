#include <iostream>
using namespace std;


int main(){
     char *a[5];

    cout<<" enter here a:";
     cin>>(a);
    int  obsd=0;
    int overallsum=0;
     for (int i =0;*a[i]!='\0';i++){
          int difference=a[i]-a[i+1];
            obsd=difference; 
             cout<<obsd;
             overallsum+=obsd;
              cout<<endl;
          }
          cout<<"Hence here overall sum of the obsolute difference:"<<overallsum<<endl;          
return 0;
}
