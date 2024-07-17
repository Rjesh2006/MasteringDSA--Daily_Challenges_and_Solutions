#include<iostream>
using namespace std;
#include<cstring>


char* reverse(char arr[],int size){
    int i = 0;//for start 
    int j=size-1;//setted for end
while (i<j)
{
    swap(arr[i],arr[j]);
    i++;
j--;
}
return arr;


};


bool check_pelidrem(char ar1[],int size){
    char original_value[100];

    strcpy(original_value,ar1);

        char* rev=reverse(ar1,size) ;//rev pointer to array  can also store  string as array

    int s =0;
    int end= size-1;
   


    while (s<=end)
    {
        if (original_value[s] != rev[s])
        {
           return false ;
        }
        s ++;
        }
        return true;
        
    }
    


int main (){


    char ch[100];
    cout <<" enter the string here"<<endl;
    cin>>ch;
  
    int size=strlen(ch);

    if(check_pelidrem(ch,size)==true ){
        cout<<"itss a palindrome";

    }else{
        cout<<" its not ";
    }


}