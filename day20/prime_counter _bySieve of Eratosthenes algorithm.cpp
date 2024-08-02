#include<iostream>
#include<vector>
using namespace std;
int countprimes(int n){
int count=0;

vector<bool> isprime( n+1,true);// isprime we not go further id there is no any true parameter 

isprime[0]=isprime[1]=false;
for (int  i = 2; i < n; i++)
{
  if (isprime[i]){ 
    count++;

    for(int j = 2*i;j<n;j=j+i){
        isprime[j]=0;       //bouncing the index as how much there table of like if coming as 3 then we will bounce the j as 3 

    }


}
}
return count;


}


int main(){
int nuumbers;
cout<<" enter the number here:";
cin>> nuumbers;//numbers that we have to find theat is this all renge inn this number how much is it there as prime or not
cout<<endl;

int ans_storer= countprimes(nuumbers);
if (ans_storer!=0)
{
    cout<<"the total number of primeis present inn the givent range of number's are :"<<ans_storer;
}else{
    cout<<" no prime are exist in this range of this numbers:";

}

    return 0;

}
