#include<iostream>
using namespace std;


bool binary_search(int arr[],int start , int end,int target){
if (start>end)
{
    return false;

}
int mid= start +(end -start)/2;
if (arr[mid]==target)

{    cout<<endl<<"here is the index of that target element :"<<mid<<endl;

    return true;
}


if (arr[mid]<target)
{
    return binary_search(arr,start+1,end, target);

}
else//if we are using else condtion and we returned in else so we dont need to return at last of the function 
{
    return binary_search(arr,start,end-1, target);
    
}             


}


int main(){

    int size;
    cout<<"Enter size :";
    cin>>size;
    cout<<endl;

int* arr=new int [size];

cout<<"Enter the elements here:"<<endl; 
for (int i = 0; i < size; i++)
{
   cin>>arr[i];
}
int target;
cout<<"Enter the target here :"<<endl;
cin>>target;



//fucntion called here;

int ans_storer=binary_search(arr , 0,size, target);
if (ans_storer)
{
    cout<<"Element exist"<<endl<<"prog sucessfully executed";

}else{
    cout<<"not exist"<<endl<<"prog sucessfully executed";

}



delete[] arr;
    return 0;

}