#include<iostream>
using namespace std;

   // here we have the function for the trplet number who are equal to the sum value

void pair_sumvalue( int arr[], int size){
int sum = 13;
bool found=false;


   for (int  i = 0; i < size; i++) // yaha se ek se gaya 
   {
     for (int j= i+1; j < size; j++){// phir yha se uske aage waale se 
                                           // to abb hamare pass do number ho gaye abb in do number ke aggge 
                                           //se ek looop cahlayenge or inn dono ( k=j+1)wale loop mai agge ke element se copare karwange 
     
         for (int k = j+1; k < size; k++){// yeh hai hmaara tisra loop joo (j+1) ke aage ki range se chalega or aagge ke baki element 
                                         //se compare karaygea for the particular value thats comning from uper both loops
                  if (arr[i]+arr[j]+arr[k]==sum){   
                    cout<< "The pair found  :"<<arr[i]<<" "<< arr[j]<<" "<<arr[k]<<endl;
                        found =true;  



         }
         

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
  }
  
cout<<endl;
pair_sumvalue(arr,size);

   return 0;

 }