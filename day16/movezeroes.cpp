#include<iostream>
using namespace std;
#include<vector>


void move_zeroes( int arr[],int size){
    int i =0;
    int j=0;
    while (i<size)
    {
        if (arr[i] !=0)//when array is not equal to 0 yehh jab tak incrimeent the j while u not get the non zeroelement . remember ur i will be connstat while u not enterd in if condiotion
        {
            swap(arr[i],arr[j]);
          j++;

             
        }
      
       i++;

    }
    
}


















int main (){

    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;

int arraya[n];
cout<<" enter here the elements of array a:"<<endl;
for (int i = 0; i < n; i++)
{
   cin>>arraya[i];
}

move_zeroes(arraya,n);
cout <<" here is the moved zeroes array : ";
for (int  m = 0; m <n; m++)
{
   cout<<arraya[m]<<" ";
}


return 0;

}
