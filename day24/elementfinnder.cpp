#include<iostream>
using namespace std;



int element_finder(int arr[],int n,int target){
    if (n==0)
    {
       return -1;
       
    }
    if (arr[n-1]==target)//here we have taken the n-1 beacuse the indexing start from the zero
    {
      return 1;
    }

    int ans= element_finder(arr,n-1,target);

        return ans;

    
}



int main(){
    int n ;

cout<<"enter n here :";
cin>>n;
int target;
cout<<"enter the target here :";
cin>>target;
cout<<endl;

int* arr= new int[n];
cout<<"enter the elements here :";



cout<<"enter the elements here"<<endl;
for (int i = 0; i < n; i++)
{
   cin>>arr[i];

}

int final_ans=element_finder(arr,n,target);
if(final_ans){
cout<<"here is the found element is  :"<<final_ans;
}else{
    cout<<"false";
}
delete []arr;

    return 0;
}