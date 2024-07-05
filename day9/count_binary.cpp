#include<iostream>
using namespace std;


void count_binary( int arr[],int size){
    int count0=0;
    int count1=0;
    int i=0;
    int j=0;
//int k=count0;

   while (i<size){
    if (arr[i]==0)
    {
     count0++  ;
  }


      if (arr[i]==1)
      {
        count1++;
      }
      
    
           i++;

   }

cout<<"Here we have zeroes count's are :"<<count0<<endl<<"Here we have ones count's are : "<<count1;


 while (j<=count0)
      {
          arr[j]=0;

          j++;
      }

int k = count0;
  while (k<=size)
      {
          arr[k]=1;

          k++;
      }


    
}

;


int main(){

    int size;
    cout<< " Enter the size here:";
    cin>> size;

     int arr[size];
      cout <<"Enter the array element here :";
      for (int i = 0; i < size; i++){
        cin>>arr[i];
        }
        
cout<<endl<<"Here your enetered elements  are:";
  for (
    int i = 0; i < size; i++){
       cout<<" "<<arr[i];
    }
  
cout<<endl;
  count_binary(arr,size);

cout<<endl<<"Modified array is :";
for (
    int i = 0; i < size; i++){
       cout<<" "<<arr[i];
    }
   return 0;

 }