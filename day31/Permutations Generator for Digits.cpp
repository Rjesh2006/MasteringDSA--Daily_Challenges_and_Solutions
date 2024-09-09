#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<vector<int> >& ans ,vector<int> nums,int index){
if (index>=nums.size())
{
   ans.push_back(nums);
   return ;

}
for (int j=index;j<nums.size();j++)
{
    swap(nums[index],nums[j]);
    solve(ans ,nums,index+1);

    //bactrack
    swap(nums[index],nums[j]);

}

}

int main(){
 vector<vector<int> >ans;
int index=0;
int n;
cout<<"Enter the Number of dgits u wanna : ";
cin>>n;

vector<int> nums(n);
cout<<"enter the digit's here :"<<endl;
for (int  i = 0; i<n; i++)
{
    cin>>nums[i];

}

solve(ans,nums,index);

//print outout
cout << endl << "Here is your result for the array elements you provided:" << endl;
    for (const auto& vec : ans) {  // Loop through each permutation
        for (int i : vec) {
            cout << i << "  ";  // Print each element in the permutation
        }
             cout<<" , ";

         
    }

    return 0;

}
