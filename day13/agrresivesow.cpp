#include<iostream>
using namespace std;


bool ispossible( int arr[],int size , int k ,int mid){
    
    int cowcount=1;
    int lastpos= arr[0];
    for (int  i = 0; i < size; i++)
    {
       if (arr[i]-lastpos>=mid)
       {
        cowcount++;
        if (cowcount==k)
        {
            return true ;

        }
        lastpos= arr[i];

        
       }
       
    }
    
return false;

}



int agressive_cow ( int arr[], int size, int k ){
int s=0;
int sum =-1;

for (int  i = 0; i < size; i++)
{
sum = sum +arr[i];
}

int end = sum ;
int largest_distance=-1;
int mid = s+ ( end- s)/2;
while (s<=end)
{
if ( ispossible( arr,size ,k,mid))
{
largest_distance = mid;
s= mid +1;// because we need the largest distance that 

}else{
    end = mid -1;

}
mid = s+ ( end-s)/2;

}
return largest_distance;


}




int main (){
int size ;
cout<<" Enter the size here:";
cin >> size;
cout<<endl;


cout<<"Enter the elements of the array here :";
int stall[size];
for (int i = 0; i < size; i++)
{
    cin>>stall[i];
}

int k;
cout<<" Enter the k here:";
cin>>k;
cout <<endl;


int result =agressive_cow(stall,size,k);

if (result!= -1)
{
cout<<" Here is the largest distance b/t the cows are: "<< result;

} else{
    cout<<"No largest distance found here :"<< result;

}
return 0;

}
