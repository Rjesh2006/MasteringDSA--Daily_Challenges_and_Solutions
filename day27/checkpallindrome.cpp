#include<iostream>
using namespace std;

bool pallindrome(string& name,int start , int end){
    if (start >end)
    return true;


   

if (name[start]!=name[end-1])
    return false;

else{
   return  pallindrome(name,start+1, end-1);


}

}
int main(){

    string name;
    cout<<"enter the stirng here :";
    cin>>name;

   bool tf= pallindrome(name,0,name.length());
    if(tf)
    {
       cout<<"it's pallindrome";


    }else{
        cout<<"it's not pallindrome"
        ;
    }
    



    return 0;

}