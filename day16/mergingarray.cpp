#include<iostream>
using namespace std;

void  merging_array(int arr1[],int arr2[],int n , int m,int arr3[] ){

    int i =0;
    int j=0;
    int k =0;
    while (i<n && j<m)
    {   if (arr1[i]<arr2[j])
    {
         arr3[k++]=arr1[i++];
    }    

    else{
        arr3[k++]=arr2[j++];

    }
    }

while (i<n)
{
    arr3[k++]=arr1[i++];
}

while (j<m)
{
   arr3[k++]=arr2[j++];

}

    }



int main (){

    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;

int arraya[n];
cout<<" enter here the elements of array a:"<<endl;
for (int i = 0; i < n; i++)
{
   cin>>arraya[i];

}

int m ;
cout<<" enter the m here ";
cin>>m;

int arrayb[m];
cout<<" enter here the elements of array b:"<<endl;
for (int j = 0; j < m; j++)
{
   cin>>arrayb[j];
   
}


int array3[m+n];
merging_array(arraya,arrayb,n,m,array3);

int size_for_aarr3=m+n;


cout<<" here is ur merged array: ";
for (int b = 0; b <size_for_aarr3; b++)
{
   cout<<array3[b]<<" ";

}

return 0;

}