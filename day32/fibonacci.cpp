#include<iostream>
using namespace std;

int fibo(int n){
    if (n==1)
    {
       return 1;

    }
    if (n==0)    {
      return 0;

    }
    

    int ans= fibo(n-1) + fibo(n-2);

return ans;


}

int main (){

    int n;
    cout<<"enter the n here :";
    cin>>n;

    cout<<endl;


   int final_ans = fibo(n);

  cout<<"here is the final answer is :"<<final_ans;



    return 0;

}