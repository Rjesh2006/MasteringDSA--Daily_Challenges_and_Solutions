#include<iostream>
using namespace std;

int sum_of_array(int arr[], int size){
    if (size ==0)
    {
        return 0;

    }if (size==1)
    {
       return arr[0];
       
    }
    


    
    int ans = arr[size-1]+sum_of_array(arr,size-1);

return ans;

    
}



int main (){


int n ;

cout<<"enter n here :";
cin>>n;


int* arr= new int[n];
cout<<"enter the elements here :";

for (int i = 0; i < n; i++)
{
   cin>>arr[i];

}

int final_ans=sum_of_array(arr,n);
cout<<"here is the total sum of the array :"<<final_ans;


    return 0;

}