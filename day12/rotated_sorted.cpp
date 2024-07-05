#include<iostream>
using namespace std;

int pivot_element ( int arr[], int size){


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
return s;
}




int binary_search(int arr[],int start , int end,int target){

while (start<end)
{int mid = start+ ( end -start)/2;

  if (arr[mid ]==target){
    return mid ;
  }
  else if (arr[mid ]<target )
  {
    end =mid -1;

  }else if (arr[mid ]>target)
  {
start =mid +1;
  }
  
}
  return -1;

}




int rotated( int arr[], int size, int target){

int pivot = pivot_element(arr,size);
  if (target >=arr[pivot]&& target <=arr[size-1])
  {
return binary_search(arr,pivot,size-1,target)  ;
  
}
else{
  return binary_search(arr, 0 ,pivot -1, target);
}
}






int main (){
int size;
cout<<" Enter the size here:";
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
}
cout<<endl;
int result =rotated(arr,size,3);
if (result !=-1)
{
cout<<"Target element is found at index at:"<<result;
}else{
  cout<< " Target not found try with differ array ";
}
}