#include <iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;

    s.insert(5);
    s.insert(6);
    s.insert(8);
    s.insert(2);
    s.insert(7);
    s.insert(5);
    int n= s.size();

for (auto i:s)
{
    cout<<" here is the elements of the sets:-->"<<i<<endl;

}
cout<<endl;
set<int>::iterator it=s.begin();
it++;//it can itereator whole elements of the sets but we have to assign the their index so it erase only that part in this case we have assgned itss begins but wee updated it as ++ means it +2 index so it erase +2 inde element only ;
s.erase(it);
cout << " here the second element will be erase means 5"<<endl;

for (auto i:s){
    cout<<"after the erase fn inititalized-->"<<i<<endl;

}
//here we have the count fn that counnting that element which is exist or not :
cout<<endl<<" is it present or not respectively 1 or 0--> "<<s.count(5);//here we will find for the 5 which isnot exist we knew it so it will give us 0 (false)
// we have also a fn which is finding for the element and it will return the reference of iterator of that element so that we can go for the further elemetn with that iteretor
set<int>::iterator itr=s.find(6);
for (auto it=itr;it!=s.end();it++)
{
    cout<<*it<<" ";
}


}