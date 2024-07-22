

#include <iostream>
using namespace std;
#include <string>
#include<cstring>
#include<algorithm>


void space_replacer( string &str ){
    int size= str.length();
    string result_store;

for (int i = 1; i <size-1; i++)
    {
       if (str[i]==' ')
       {
      result_store.push_back('@');
      




       }else{
       result_store.push_back(str[i]);
       }
      



    }


str = result_store;


}



int main (){
    string str= " the name is  Rajesh ";
  cout << " Here is your previos string with space _  --> :"<<str;
  
space_replacer( str);

  cout <<endl<<" here the updated string --> : " <<str;

 

  return 0;



}
