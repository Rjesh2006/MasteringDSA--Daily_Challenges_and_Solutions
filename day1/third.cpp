//check prime 


# include<iostream>
using namespace std;
int main (){
    for (int j=1;j<=5;j++){
    int n;
    cout<<"enter the wnumber here:";
    cin>>n;
    cout<<"here is ur n:"<<(n)<<"\n";
    
for (int i=1;i<n;i++){
    
   if(n%2==0){
    cout <<"its not prime"<<i<<"\n";

   }
    else  {
        cout<<"its prime";

    cout<<"prime for :"<<i<<"\n";

}
}
    };
    return 0;
    }




