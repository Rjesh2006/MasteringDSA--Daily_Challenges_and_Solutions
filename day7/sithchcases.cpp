#include <iostream>
using namespace std;

int main (){


int a ,b;
cout <<" enter a  here:";
cin>>a;
cout<<" ";

 int num ;
cout << " enter the num here :";
cin>> num;
cout <<" ";

switch (a)
{
case  1 : cout <<"here we have inside the 1 switch case by parameter 1"<<endl;
         switch (num )
         {
         case 5:
            cout <<" here we are inside a switch case 5whhich is inside a case";
            break;
         
         }

    break;

case 2:
    cout<<"here we have inside the 2 switch case by parameter 2"<<endl;
    break;

default:cout<<"its default case here"<<endl;
    break;
};



    return 0;
}