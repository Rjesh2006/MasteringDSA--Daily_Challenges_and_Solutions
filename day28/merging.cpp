#include<iostream>
using namespace std;
void merger(int arr[],int s , int end){

    int mid=s+(end-s)/2;
    int len1=mid-s+1;
    int len2=end-mid;

    int* fps=new int[len1];
    int* sps=new int[len2];

    int k1= s;


    for (int i = 0; i<len1; i++)
    {
        fps[i]=arr[k1++];//copying the half elements from the main array to the  parsed array


    }


    int k2 = mid+1;//indec start for second half arrya of main array

    for (int i = 0; i<len2; i++)
    {
        sps[i]=arr[k2++];//copying the aNOTHER half elements from the main array to the  parsed array


    }
    // now merging the parsed to make it sorted and put it back to the mainarray  
    int k3=s;// s is the start(starting indexo the main arrat)
    int index1_forthe_fps =0;
    int index1_forthe_sps =0;



    while (index1_forthe_fps<len1 && index1_forthe_sps<len2)
    {
       if (fps[index1_forthe_fps]<sps[index1_forthe_sps])
       {
         arr[k3++]=fps[index1_forthe_fps++];

       }else{
                arr[k3++]=sps[index1_forthe_sps++];


       }
       
    }
    while (index1_forthe_fps<len1)
    {
        arr[k3++]=fps[index1_forthe_fps++];
    }
     while (index1_forthe_sps<len2)
    {
        arr[k3++]=sps[index1_forthe_sps++];
    }
    
    

}
void merging_sort(int arr [],int s, int end){
    if (s>=end)
    {
        return;
    }
    int mid =s+(end-s)/2;
    merging_sort(arr,s,mid);//parse left  array form main arrya

    merging_sort(arr,mid+1,end);//parsed right arrya form main arrya

    //now we ave to sort the the parsed arrya's so we wil call here another fn to do this thinks

    merger(arr,s,end);



}



int main (){
    int size ;
    cout<<"entr size :";
    cin>>size;
    cout<<endl;

   int* arr=new int[size];
   cout<<"enter the elements hre :"<<endl;
   for (int i = 0; i <size; i++)
   {
    cin>>arr[i];


   }

   merging_sort(arr,0,size-1);
   cout<<"size afte the function execution:"<<size<<endl;

   cout<<"here is the merge sorted arrya :"<<endl;

   for (int i = 0; i <=size-1; i++)
   {

     cout<<arr[i]<<" the i is :"<<i<<endl;
   }
   

    return 0;

}