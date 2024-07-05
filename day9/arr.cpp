
//alternate swaaping the numbers


#include <iostream>
using namespace std;

void  swapping_fn(int &a, int &b) {
    cout <<endl;
    cout<< " swapper function executed here ";
    int temp = a;
  a=b;
  b=temp;
}
;

void lternate_reerse(int arr[], int size){

for (int i = 0; i<size; i=i+2)
{
    if (i+1<size){
   swapping_fn(arr[i],arr[i+1]);
}


}

};



int main (){

    int size;
    cout << "enter the size here for the array:";
    cin >> size;

int arr [size];
cout<< "enter the element of array :"<<endl;
for (int  i = 0; i<size; i++)
{
cin >> arr[i];



};


cout<<"Here the entered value is :"<<endl;
for (int i =0;i<size;i++){
cout << " "<<arr[i];
}


lternate_reerse(arr,size);



cout<<"Here we have  the modifIED value is :";
for (int i =0;i<size;i++){
cout << " "<<arr[i];
}
return 0;


}