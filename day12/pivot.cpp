#include <iostream>
using namespace std;


//pivot search element programme 
void pivot_element ( int arr[], int size){


    int s =0;
    int e=size-0;
    int mid = s + ( e-s)/2;


    while ( s<e){
      if ( arr[mid ]>=arr[0]){//jabtak yeh conditiionn true hai tabtak start ko agge badhaoo if jab koi element first element of arrray se cchottoa ho tab rook jao or end ko mid ke pass le aao jisse start orr mid saame ho jaynge or looop aage nahi badhega thn usss or ukse element ko print karwwaado
        s= mid +1;


      }else{// yaha end ko mid ke equal kardia hai kyuki hame pivot mil gaya  hai or hame aage nahi jana
        e = mid;

      }
mid = s+ ( e-s)/2;

    }
cout<<endl << " Here is the pivot eleent is : "<< arr[e]<< endl<<"  And the index is : "<<e;

}



int main (){


    int size;
cout<<" ENTER THE SIZE HERE:";
cin>>size;
int arr[size];
cout<< " Enter the elements of the arrya here:"<<endl;
for (int  i = 0; i < size; i++)
{
   cin>> arr[i];

}


cout << " Here is yours enterred elements of this array:";
for (int i = 0; i < size; i++)
{
    cout <<" "<< arr[i];
};
cout<<endl;

pivot_element(arr,size);

return 0;

}