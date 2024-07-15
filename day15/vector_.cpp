#include<iostream>
using namespace std;
#include<vector>

int main (){
vector<int> v;
cout<<"now if we want the current capacity of the vector uisung capacity()"<< v.capacity()<<endl;
cout<<"for the size :"<<v.size()<<endl;
// cout<<"noe if we wan to add element into the array then wee will use :"
v.push_back(5);
cout<<" now checking the cpacity :"<< v.capacity()<<endl;//to yaha iski size one hogi default mai 2 size milti hai agar usse jyada element hamne push kia to vector double ho jayega or usme sare elements daal dega,
cout << " size after pushing  5 :"<< v.size();
//now pushing another elemtn 
v.push_back( 4);

// now again checking the size of the vector
cout << " size after pushing  5 :"<< v.size();

// now pushing the element againn 
v.push_back(9);
cout << " size after pushing  5 :"<< v.size()<<endl;

// now checking capacity 
cout<<" capacity afer pushing the 3 elements : "<<v.capacity();//because we now that default is 2 and we putten 3 elemnts then its gone doubled and create capacity as 4;
                                                                 //note one think that size showing is how much elemenet is there . capacity mean's that how much is alloted to that vector to srtore elements.


//  pop_back() fn we have which is for poping last element of the vector; "
v.pop_back();
cout <<" here the all elementswe have";
for(int i:v){
    cout<<i<<" ";

}
}