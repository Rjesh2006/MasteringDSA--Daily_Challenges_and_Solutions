#include<iostream>
using namespace std;

int get_lengthy(char arr[]){
   int  count =0;
    for (int  i = 0; arr[i]!='\0'; i++)
    {
      count++;

    }
    return count;

    
}



int main(){
    char ch_arr[10];
    cout<<"enter the name here "<<endl;
    cin>>ch_arr;
cout << " now we can find the length of this charray:";
int result = get_lengthy(ch_arr);
cout<<endl<<result<<" ";

return 0;

}

