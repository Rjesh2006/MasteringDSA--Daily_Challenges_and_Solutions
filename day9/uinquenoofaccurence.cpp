#include <iostream> 
using namespace std;


// here we have the unique fn to find the non rpeated no value 

void  unique( int arr[], int sizee)
{
int ans =0;

for (int i = 0; i < sizee; i++)
{
    ans =ans ^ arr[i];
};

if (ans==0)
{
cout<< "true";



}
cout<<"false";


}


//main function initialised here


int main() {
int size;
cout<<" enter sizwe:";
cin>> size;
int arr[size];

cout <<" enter the arrayy element here:"<<endl;
for (int i = 0; i<size; i++)
{
    cin>>arr[i];
    

};
cout<<endl;
cout << " Here we have the value off the unique no.:";
unique( arr, size);
}
