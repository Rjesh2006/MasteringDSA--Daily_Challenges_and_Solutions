#include <iostream>
using namespace std;
void  dublicates( int arr [], int size){
      int ans=0 ;
    for (int i = 1; i <size; i++)
    {
       ans =ans ^ arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    cout <<ans;
    
}



int main() {
int size;
cout<<" enter sizwe:";
cin>> size;
int arr[size];
cout <<" enter the arrayy element here:"<<endl;
for (int i = 0; i<size; i++)
{
    cin>>arr[i];
}
cout<<endl;
cout <<"here the elements u typed :";
for (int i = 0; i < size; i++)
{
    cout<<" "<<arr[i];
}
cout <<endl;
cout << " Here we have the value off the dublicate value  no.:";
dublicates( arr, size);
}