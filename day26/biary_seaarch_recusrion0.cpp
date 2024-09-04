#include<iostream>
using namespace std;
void print(int arr[],int start ,int end){
    cout<<"start is at :"<<start<<endl<<"the end is : "<<end<<endl<<endl;
    cout<<"the  array elements are : ";
    for (int i = start; i < end; i++)
    {
       cout<<arr[i]<<" "; 
    }
    cout<<endl;

    
}
bool binary_seearch(int arr[],int start,int end,int target){
    
    print(arr,start,end);

    if (start>end)
    {
      return false;
       }

    int mid =start+(end-start)/2;

    if (arr[mid]==target)
    {
        cout<<"At "<<mid<<" index ";

       return true;
       }


    if (arr[mid]>target)
    {
        return binary_seearch(arr,start,mid-1,target);
        }

    else{
    return binary_seearch(arr,mid+1,end,target);
    }

    

}



int main(){
    
    int arr[10]={23,3,4,2,4,2,5,2,3,4};
    int size=10;
    int target=123;

    bool final_ans_statement=binary_seearch(arr,0,size,target);
    if (final_ans_statement)
    {
       cout<<"target is found";

    }
    
    else{
        cout<<"not found";
    }
    

    return 0;
}