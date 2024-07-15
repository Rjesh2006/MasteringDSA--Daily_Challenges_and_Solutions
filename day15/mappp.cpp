#include<iostream>
using namespace std;
#include<map>


int main(){
map<int,string>m; //here we taken int and string as paramenter 

m[1]="rajesh";//integer value we let it as key 
m[6]="aravi";
m[9]="shubham";


//we can insert here also any value to map with the specific string 
m.insert({8," shristy"}); //its like dictonary of the python 

for(auto i:m){//i:m mean that i belongs to m
    
    cout<<i.first<<" "<<i.second<<endl; //it will print the interger part only like 1 6 8 9
    //it will print the string part of the whhih we map  with that integer value;

}
cout<<"after the erase function "<<endl;
m.erase(6);


for(auto i:m){//i:m mean that i belongs to m
    
    cout<<i.first<<" "<<i.second<<endl;



}cout<<endl;


auto it=m.find(8);
for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;

}

}