#include<iostream>
using namespace std;


void swap (int &a,int &b){
    int temp = a;
     a= b;
     b=temp;

}

void selection_sot( int arr[], int size ){

    for (int  i = 0; i < size-1 ; i++)// size -1 beacuse we want that i shoould traerse only for second last element of arrray kyuki ham chahhte hai ki j =i+1 .check kare ki pahle waala element agge wale se bada to ya ham kehh sakte hai ki agge wala peehe wale se jyada chhota hai thaths why we did j=  i+1; below 
    {
        int minidex=i;


        for (int j =i +1; j<size; j++)// look here to better understanding the code
        {
            if (arr[j]<arr[minidex])
            {
                  minidex=j;
            }
            
        }
        swap(arr[minidex],arr[i]);
    }
    
}



int main(){
    int size;
    cout <<" enter the size here:";
    cin>> size;

    int arr[size];
    cout<<" enter the arrya elements here:";
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
    
  selection_sot ( arr, size);

    cout<<endl<<" seletion sorted array is:";
    for (int i = 0; i < size; i++)
    {
       cout<<" "<<arr[i];
    }
    
}