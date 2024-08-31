#include<iostream>
#include <string>
using namespace std;


void stair_case(string arr[],int number){

    if (number==0)
    {
        return ;


    }

    int digit = number%10;
    number = number/10;

    stair_case(arr,number);

    cout<<arr[digit]<<" ";



    
}

















int main (){
int number;
cout<<"enter the number :";
cin>>number;
cout<<endl;

string arr[11] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine", "ten",
    };


   stair_case(arr,number);

    return 0;

}