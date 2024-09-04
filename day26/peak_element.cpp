#include<iostream>
using namespace std;


int peak_recursive_finder(int arr[],int end,int start){

    if (start=end)
    {
        return  ;

    }
        int mid= start+(end-start)/2;

    
    if (arr[mid] < arr[mid+1]){
     start=mid +1;
     
      }
      else{
        end = mid;

      }
      

    return peak_recursive_finder(arr,end,start+1);

    
}











int main(){
    int size;
    cout<<"enter size :";
    cin>>size;
    cout<<endl;

int* arr= new int[size];
cout<<"enter the elemts here :"<<endl;
for (int i = 0; i < size; i++)
{
   cin>>arr[i];

}

cout<<peak_recursive_finder(arr, size,0);

    return 0;

}