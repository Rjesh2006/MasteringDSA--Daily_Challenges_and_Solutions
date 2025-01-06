#include<iostream>
using namespace std;
#include<stack>

int main(){
string str="rajesh";
stack<char>s;

for (int i = 0; i < str.length(); i++)
{
    char ch= str[i];
   s.push(ch);
   
}
string ans= " ";
while(!s.empty()){
    char ch= s.top();
    ans.push_back(ch);
    s.pop();

}

cout<<"ans is revrsed here :"<<ans;



return 0;

}