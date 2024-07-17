#include<iostream>
using namespace std;
#include<cstring>//for strlen fn to get the size

 void  reverse(char arr[],int size){
    int i = 0;//for start 
    int j=size-1;//setted for end
while (i<j)
{
    swap(arr[i],arr[j]);
    i++;
j--;
}
cout<<" "<<arr;


}




int main (){
    char arr[10];
    cout<<" enter the name here"<<endl;
    cin>> arr;
   int size= strlen(arr);//gettting the size if the chracter array 


    cout<<" reversing this all elements by reversefunstionn:";
    reverse(arr,size);
  
return 0;

}