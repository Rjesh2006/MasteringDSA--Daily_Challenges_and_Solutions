#include<iostream>
using namespace std;


void bubble_sort(int *arr, int size){
if (size==1||size==0)
{
    return ;

}
for (int i = 0; i <size-1; i++)
{
    if (arr[i]>arr[i+1])
    {
       swap(arr[i],arr[i+1]);
    }
    
}
bubble_sort(arr,size-1);



}






int main(){
    int arr[5]={2,8,1,3,9};
    bubble_sort(arr,5);
cout<<"here is the modified array : ";
for (int i = 0; i <5; i++)
    {
        cout<<arr[i];

    }



    




    return 0;

}