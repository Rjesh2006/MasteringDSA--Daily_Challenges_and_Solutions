#include<iostream>
#include<string>
using namespace std;


void remove_all_adjacent_dublicates(string& str){
    
int i=0;

    while (i<str.length()-1)
    {
        if (str[i]==str[i+1])
        {
          str.erase(i,2);
          if(i>0){
            i--;  //ek position peeche move karo taaki naye adjacent duplicate check kar sako

          }
        }else{
            i++;

        }
       

    }
    
    
}


int main(){

    string str="abbaca";

    remove_all_adjacent_dublicates(str);

    cout<<" now here is your updated string which have no adjacent duplicates--> : "<<str<<endl;

    //output sould be : ca
    return 0;



}
