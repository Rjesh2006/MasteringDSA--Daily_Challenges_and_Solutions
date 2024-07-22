#include<iostream>
#include<string>
using namespace std;
void array_indexer(string &str){
    int counting_the_chracter_[26]={0};
    for (int i = 0; i <str.length(); i++)
    {
        int index =str[i]-'a';//yeh sirf index dega jha for that chracter joki s ko traverse karke mil rahi hai  
    counting_the_chracter_[index]++;

    }

//printign the chracteer count with the chracter's
cout<<"here we will see the chraccter with there frrequent coutn : ";
for (int i = 0; i < 26; i++)
{
  if (counting_the_chracter_[i] > 0) { // Print only if the character is present in the string
            cout << char(i + 'a') << " " << counting_the_chracter_[i] << endl; // Convert index to character and print frequency
        }
}




    

}

int main(){
    string str="ajdsoeruconeitorecsropssoehtcsi";// add your string here what u want 
   
array_indexer(str);








}
