#include <iostream>
using namespace std;

int factorial(int number ){
      int ans =1;
    for (int  i = 1; i <= number; ++i){
        ans =ans *i; }
    return ans;
};


int main(){
int n;
cout <<" enter the n here:";
cin>>n;
cout<<endl;

int r;
cout <<" enter the r here:";
cin>>r;
cout<<endl;

int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"Here we have the final answer of  nCr formula:" <<ncr ;



return 0;
}