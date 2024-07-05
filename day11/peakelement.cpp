#include <iostream>
using namespace std;



void peak_finder(int arr[], int size){

int start =0;

int end=size-1;
int mid = start +(end - start)/2;



while (start <end ){
if (arr[mid] < arr[mid+1]){
     start=mid +1;// jab tak mid    mid +1 wale se choota hai tab tak start ko agge karte rehna hai jaise hi mid   mid +1 wale se bada hua tab else mai jana hai .
      }
      else {
         end = mid;// jab mid   mid +1 wale se bade hoga tab hame end ko mid pe le ayenge taki agle loop main mid bhi wahi ayein .
    }


      mid = start +(end - start)/2;
  
}
cout<<endl<< " Here we have the peak value of this given array elements is: "<<arr[start];
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

peak_finder(arr,size);


return 0;

}