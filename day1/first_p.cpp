
# include<iostream>
using namespace std;
int main (){
    int n;
    cout<<" enter the number of n:"<<"\n";
    cin>>n;
    int i=0;
    int total=0;

    while (i<n){
       
        total =total +i;
        i += 2;
        cout<<"value of i:"<<i<<"\n";//here we updated the value of the i by +2 so tht we wwant the sum of the even numbers 
    


    };        

    cout <<"the total is :"<<total;

    return 0;


}
