#include<iostream>
using namespace std;

int sumfinder(int *arr,int n ){
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i]+sum;

    }

    return sum;

    
}





int main (){
int n ;
cout<<"enter the  here: ";
cin>>n;

int * arr= new int[n];
// note that new int[n] is specify that to creat a array size of n
cout<<"Here enter the array eleemtns :"<<endl;


for (int  i = 0; i <n; i++)
{
  cin>>arr[i];
}

    //now delete the pointer 
int ans_storer= sumfinder(arr,n);

cout<<" here iss the sum of that array element's :"<<ans_storer;

 delete arr;

 return 0;
}
