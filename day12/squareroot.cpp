#include <iostream>
using namespace std;

//square root using binary search by the following function:
int square_root(int arr[],int size,int target){
int start =0;
int end = size;
while (start<end){
      long long int mid = start + ( end- start)/2;

    if ( arr[mid]*arr[mid]==target){
           return arr[mid];
    }     else if (arr[mid]*arr[mid]>target){

           end =mid-1;
    }              else if (arr[mid]*arr[mid]<target){
start = mid+1;
        }
 mid = start + ( end- start)/2;


      }

return -1;//jab pure array mai binary search se loop chal kar khatam ho jayega or agar phir 
         //bhi uska root hame nahi milta hai to -1 return kardena last mai 
}




//here this function is for the more preciossd root of our spcified target 
double accurate_result( int target,int precision, int tempresult){
       cout <<endl<<" fucntion executed here---";
double factor=1;
double ans=tempresult;
for (int  i = 0; i < precision; i++){
    factor=factor/10;
          for (double j =ans ; j*j <target ;j=j+factor)   
        {
        ans =j;

            }

}
return ans;

}




int main(){
int size;
cout<< " enter the size here:";
cin>>size;

cout <<endl;


int arr[size];
cout << " enter the element of the arrray here:"<<endl;
for (int i = 0; i <size; i++)
{
    cin>>arr[i];

}

int target;
cout<< " enter the target here:";
cin >> target;
cout<<endl;

int precicions;
cout << " enter here precicion :";
cin>> precicions;

int temresult =square_root(arr,size,target);
cout<<endl<<" here is your accurate root of the target_number "<<accurate_result(  target, precicions, temresult);

 }