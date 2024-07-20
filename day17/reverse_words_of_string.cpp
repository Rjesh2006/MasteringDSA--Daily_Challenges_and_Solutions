#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//function to reverse a portion of a string 
void word_chracter_reverse( string &str, int start , int end){
    reverse( str.begin()+ start , str.begin()+ end);   // Example: For the string "Hello world" with start = 0 and end = 5, reverse(str.begin() + 0, str.begin() + 5) reverses the substring from index 0 to 4, resulting in "olleH world".

}


void reversewords( string &str ){
    reverse( str.begin(), str.end());
    //here we are reversing the whole chracter of a a string so that the will be place as we want ( words will be reversed by therie postion but also they reverssed there each chraccter of a wordss so now we have to reverse the particular words becauese we dont want to change that words chrcacters )


    int start =0;   //for each word count 

    for (int end  = 0; end<str.length() ; ++end)
    {
       if (end==str.length() || str[end]==' '){   
        //if a word will end then waha se start or end fix ho jayenge to change the the partiualt range of a word so uss rngge ko utha kar reversegment fn mai de denge or begin +start , str.end +end  se reverse kar denge 
     word_chracter_reverse(str, start , end);
       start= end +1;


       }
       
    }
    

}



int main (){
string input = " Hey there i am Rajesh ";                  
//inpu is string here.

reversewords(input);
cout<<" now here we have our words reversed of a string --> "<< input;





}
