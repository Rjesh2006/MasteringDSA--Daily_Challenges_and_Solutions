#include<iostream>
using namespace std;

void rotated_array(int arr[],int target,int size){
    int  end= size;
    int i =0;
    int j = target;

    while (i<target && j<=end)
    {
        swap(arr[i],arr[j]);
    i++;
    j++;
    } 
    
}



int main(){
    int arr[]={1,2,4,5,6,7};
    int size=sizeof(arr)/4;
    cout <<" her is array before roatated:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    
    
int target= 3;
rotated_array(arr,target,size);

cout<<endl<<" here is ur rotated array : ";
for (int  i = 0; i<size; i++)
{
   cout<<arr[i]<<" ";

}


return 0;

}
