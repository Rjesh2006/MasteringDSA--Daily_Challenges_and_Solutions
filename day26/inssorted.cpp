#include<iostream>
using namespace std;


bool inssorted_array(int arr[],int size){
    if (size==0 ||size==1)
    {
        return true;

    }

   if (arr[0]>arr[1])
   {
   return false;

   }else{
    bool remainin_part= inssorted_array(arr+1,size-1);
    return remainin_part;

   }
   
 
}


int main(){
cout<<"enter the n here :";
int n;
cin>>n;
int *arr=new int[n];
cout<<"enter the elemenst here for the array :"<<endl;
for (int  i = 0; i < n; i++)
{
 cin>>arr[i];

}



int size= 10;
bool ans = inssorted_array(arr,size);

if (ans)
{
    cout<<"in this arrya the elements are sorted here"<<endl;


}
else{
    cout<<"elements are not sorted here";

}


   delete [] arr;
   
    return 0;

}