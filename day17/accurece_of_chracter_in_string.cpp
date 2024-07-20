#include <iostream>
using namespace std;
#include <string>
#include<algorithm>

//assigning the coutn to the pariticular chraccter of an string 
char getmaxaccurance( string s ){
    int arr[26]= {0};

    for (int  i = 0; i < s.length(); i++)
    {  char ch =s[i];

        int number =0;
        number = ch-'a';
        arr[number ]++;



    }

//findinng the most accurence chracter of a string 
 int max= -1;
 int ans =0;
 for (int i = 0; i <26; i++)
 {
    if( max<arr[i]){
        ans =i;
        max= arr[i];

    }
 }



//convert final ans of ineger into chracter
 return ans+ 'a';

    
    
}



int main (){
  string s;
  cout <<" enter ur string here :" ;

  cin>> s;



char the_final_most_accurence_character =getmaxaccurance( s);

cout<<" her is the most accurence characte of a string is-->"<<the_final_most_accurence_character;


  
  
  }








