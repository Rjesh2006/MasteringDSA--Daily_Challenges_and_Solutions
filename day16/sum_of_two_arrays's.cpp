#include<iostream>
using namespace std;
#include <vector>


vector<int> reverse(vector<int> &v){
    int s=0;
    int e=v.size()-1;
    while (s<e)
    {
        swap(v[s++],v[e--]);
       

    }
    return v;

    

}




vector<int> sum_of_two_array(vector<int> &a, int n,vector<int>&b,int m,vector<int>ans){
    int i =n-1;
    int j=m-1;
    int carry = 0;


    while (i>=0 && j>=0)
    {
       int val=a[i];
       int val2=b[j];
        int sum = val+ val2+carry;
         carry= sum /10;
        int digit= sum%10;
        ans.push_back(digit);
        i--;

        j--;



        
    }while (i>=0)
    {
       int sum= a[i]+carry;
       carry=sum/10;
       sum =sum %10;
       ans.push_back(sum);
       i--;






    }
    while (j>=0)
    {
       int sum= b[j]+carry;
       carry=sum/10;
       sum =sum %10;
       ans.push_back(sum);
       j--;

    }while (carry!=0)
    {
     int sum =carry;
     carry=sum/10;
     sum =sum %10;
     ans.push_back(sum);

    }
   return reverse(ans);
}




int main(){
    vector <int> v={1,2,3,4,4};
    vector <int>     w={2,4,9};
    vector<int> ans;
    
     int m = v.size();
     int n =w.size();

     cout<<"here is the sum of the two array's"<<endl;
     ans = sum_of_two_array(v, m, w, n, ans);

    for(int num:ans){

        cout<<num<<" ";

    }
     

  return 0;

}

