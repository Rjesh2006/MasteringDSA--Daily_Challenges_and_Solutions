#include <iostream>
using namespace std;

void duplicate(int arr[],int size){

    cout<<" inside the function"<<endl;


for ( int i =0; i < size; i++){

    arr [i];

   for (int  j = 0; j<size+1; j--)
   {
    if ( arr[i]==arr[j]){

        cout<<arr[i];
    }
   }
   
    


}

}



int main (){

int size ;
cout << " enter the size here:";
cin>>size;

    int arr[size];
    cout <<" enter the elements here:";
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];

    };



  cout <<" ur entered  elements here:";
    for (int i = 0; i <size; i++){

        cout<<" "<<arr[i];

    };
    cout<<endl;

    duplicate(arr,size);



    return 0;

    
    




}