#include <iostream>

#include<queue>
using namespace std;

int main (){
    //its a default maxi heap  its alwaays give us the maximum element when we fetched
    
    priority_queue<int>maxi;


    //now writing for mini heap 
    priority_queue< int ,vector<int>, greater<int> > mini;

maxi.push(4);
maxi.push(6);
maxi.push(5);
maxi.push(9);
maxi.push(8);

int n = maxi.size();

for (int i = 0; i <n; i++)
{
    cout<<maxi.top()<< " ";
    maxi.pop();
    

}  cout<<endl;

   //output will be as  9 8 6 5 4



mini.push(5);
mini.push(4);
mini.push(9);
mini.push(8);
mini.push(3);

int m=mini.size();
   for (int i = 0; i < m; i++)
   {
     cout<<mini.top()<<" ";
     mini.pop();

   }cout<<endl;

   //here in this case we will get ass  3 4 5 8 9




   //checking is it empty or not 
cout<<" is it empty then give as 1 which means as true tother wise false as 0 -->"<<mini.empty();

}


