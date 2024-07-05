#include <iostream> 
using namespace std;







int uinique( int arr[], int sizee)

{

int ans =0;

for (int i = 0; i < sizee; i++)
{
    ans =ans ^ arr[i];


};
cout <<ans;
return ans;
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
    

};
cout<<endl;
cout << endl << " here we have the value off the unique no.:";
uinique( arr, size);
}
