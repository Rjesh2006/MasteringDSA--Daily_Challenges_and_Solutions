#include <iostream>
using namespace std;

int main(){

int square=1;

    int a ,b;
    cout <<" enter the a and b here:";
    cin>>a;
    cin>>b;


    for (int i = 1; i <= b; i++)
    {
        square=square *a; 
    }
    
    cout <<"The  power of a is = "<<b<< " "<<"and the ans is :"<<square;

    return 0;
    
}