#include<iostream>
using namespace std;
#include<cstring>
//let creat a prog for thr pallindorme by the recurson method
void recursive_fn(char arr [],int start , int end ){
    if (start>=end)
    {
        return ;

    }
    swap(arr[start],arr[end]);
    recursive_fn(arr, start+1, end-1);



    
}


bool isspallindrome(char arr[],int start ,int end){
    if (start>=end)
    {
       return true ;

    }
    if (arr[start]!=arr[end])
    {
      return false;
    }

    return isspallindrome(arr,start+1,end -1);

    
}





int main(){
   char arr[100]= {"nooner "};

    int size= strlen(arr);

    bool ans =isspallindrome(arr,0,size-1);


    cout<<"here is the ans in bool form pallindrome or not : "<<ans;


    // if (isspallindrome)
    // {
    //    cout<<"its pallindrome";

    // }
    // else{
    //     cout<<"it's not";

    // }
    
 return 0;

}