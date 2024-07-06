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
int sum =0;
int largest_distance=-1;

for (int  i = 0; i < size; i++)
{
sum = sum +arr[i];
}

int end = sum ;
int mid = s+ ( end- s)/2;
while (s<=end)
{
if ( ispossible( arr,size ,k,mid))
{
 largest_distance = mid;
end= mid -1;

}else{
    s= mid + 1;

}
mid = s+ ( end-s)/2;

}
return largest_distance;


}



int main (){
int size ;
cout<<" enter the size here:";
cin >> size;
cout<<endl;

    int k;
    cout<<" enter the k here:";
    cin >>k;

int stall [k];
for (int i = 0; i < size; i++)
{

    cin>>stall[i];

}
int result =agressive_cow(stall,size,k);
if(result !=-1)
{
    cout<< " here is the largest distance from one cow to another :"<< result;
    } elsse{
    cout<< "largest ale not able to find  "<<result;
    }
return 0;
}
