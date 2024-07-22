#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
void string_word_eraser( string & str){
    string part="the";
    int size =str.length();

    while (size!=0&&str.find(part)<str.length())
    {
       str.erase(str.find(part),part.length());
    }
    size++;

}

int main(){
    string str=" the quick brown fox jumps over the lazy dog ";

    string_word_eraser(str);
    cout<<"Here is your updated strring with erased part -> "<<endl<<str;


    return 0;
    
}
