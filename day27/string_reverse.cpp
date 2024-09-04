#include<iostream>
#include<algorithm>
using namespace std;

void string_rverse(int arr[],int start, int end){
    if (start>end)
      return ;

    swap(arr[start],arr[end-1]);
    start++;
    end --;
    string_rverse(arr,start,end);
}
int main(){
    int size=10;
    int arr[size]={1,3,4,5,2,3,5,2,4,4};


    string_rverse(arr,0,size);
   cout<<"here is the arrya that modified or not"<<endl;
   for (int i = 0; i <size; i++)
   {
    cout<<arr[i]<<" ";
   }
   




    return 0;
    
}



