#include <iostream>
using namespace std;

bool is_it_possible(int arr[], int n,int m,int mid){
    int painter_count =1;
    int blocks=0;

    for (int  i = 0; i < n; i++)
    {if (blocks+arr[i]<=mid ){
        blocks= blocks+arr[i];
    }else{
        painter_count++;

        if (painter_count>m||arr[i]>mid)
        {
            return false;
        }
        
    }
    blocks=arr[i];

    }
    return true ;

}


int partion_painter( int arr[] , int n , int m ){
int s =0;
int sum =0;
for (int i = 0; i < n; i++){
    sum= sum +arr[i];
}

int e= sum ;
int mid = s+ ( e-s)/2;
int ans=-1;

while (s<=e){
if (is_it_possible(arr, n,m,mid)){
  ans= mid ;
  e=mid-1;
}else{
    s= mid+1;

}
mid= s+(e-s)/2;
    }
return ans;
}



int main (){
int n , m;
cout<<" Enter the n and m here:";
cin>>n>>m;

int arr[n];
cout<<" enter the elements of the arr here :";
for (int i = 0; i<n; i++){
cin>>arr[i];
}
int result =  partion_painter(arr , n, m );
if (result!=-1)
{
cout<<"here is your work blokc all blocks are painted within: "<<result;
}else{
    cout<<endl << result;

}

return 0;

}