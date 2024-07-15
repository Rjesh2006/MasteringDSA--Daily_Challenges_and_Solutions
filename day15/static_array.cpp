#include <iostream>
using namespace std;
#include <array>

int main(){
array<int,4> a={1,23,4,5};//its a static array so that in majorly we will not it in use 
int size= a.size();
for (int i = 0; i < size; i++)
{
   cout<<a[i]<<endl;

}
      cout<<" this for the front :  "<<a.front()<<endl;
      cout<<" this for the last  :"<<a.back()<<endl;
      cout<< " find the element for the certain index :"<<a.at(2)<<endl;
      cout<<"to chek is it empty or not ans will be as  empty as 0 false and 1 for true : "<<a.empty();//in this case it will be given as 0 false beacuese our arrray have something 

}
