#include<iostream>
using namespace std;



int power(int num,int ntimes){
    if (ntimes==0)
    {
        return 1;
    }
    if (num==1)
    {
        return num;


    }
   int ans= power(num,ntimes/2);
//if even 
    if (ntimes%2==0)
    {
      int for_even= ans *ans;
      return for_even;


    }else{
        
           return  num *ans *ans;

  
}
}
int main(){
    int number;
    cout<<"enter the enumber :";
    cin>>number;
    cout<<endl;

    int ntimes;
    cout<<"enter the power how much times you waanna :";
    cin>>ntimes;
   int final_ans= power(number,ntimes);
   cout<<"here is the final ans :"<<final_ans;
   



    return 0;

}