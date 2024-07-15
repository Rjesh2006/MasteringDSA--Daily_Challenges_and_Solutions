
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


int main(){
vector<int> v;
v.push_back(5);
v.push_back(9);
v.push_back(5);
v.push_back(5);
v.push_back(2);
v.push_back(5);
v.push_back(12);



cout<<"finding --12 here by binary search programme "<<binary_search(v.begin(),v.end(),12)<<"it will be return as 1 for true-->"<<endl;
int a=2;
int b=6;
swap(a,b);
cout<<" the value of a and b is now "<<a<<" "<<b<endl;
//for recersing the string wecan use the reverse function :s
string alpha="abcd";
reverse(alpha.begin(),alpha.end());
cout<<" here is the updated means that reversse string is: "<<alpha<<endl;

}