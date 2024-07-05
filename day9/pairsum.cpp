#include<iostream>
using namespace std;


void pair_sumvalue( int arr[], int size){
int sum = 5;
bool found=false;


   for (int  i = 0; i < size; i++)
   {
for (int j= i+1; j < size; j++){
if (arr[i]+arr[j]==sum){   
    cout<< "The pair found  :"<<arr[i]<<" "<< arr[j]<<endl;
    found =true;
    }

        }
        

   }

 if( !found){
            cout<< "Here we have no pair of sum value: 0";
            }


     }





 int main(){

    int size;
    cout<< " Enter the size here:";
    cin>> size;

    int arr[size];
    cout <<"Enter the array element here :";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];

    }
cout<<endl<<"Here your enetered elements  are:";
  for (
    int i = 0; i < size; i++)
  {
cout<<" "<<arr[i];
  };
  
cout<<endl;
pair_sumvalue(arr,size);

   return 0;

 }