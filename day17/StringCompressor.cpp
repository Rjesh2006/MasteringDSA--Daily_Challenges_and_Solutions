#include <iostream>
#include<vector>
#include<string>
using namespace std;


int string_compressor(vector <char>& ch){
    int i=0;

    int ansindex= 0;
    int n_size= ch.size();

    while (i<n_size)
    {
       int j=i+1;
       while (j<n_size && ch[i]==ch[j])
       {
        j++;
       }

       ch[ansindex++]= ch[i];

       int count = j-1;

       
    
    if (count >1)
    {
       string cnt = to_string(count);
       for (char i:cnt)
       {
        ch[ansindex++]=i;
       }
       
    }
    i=j;

    
    }
    return ansindex;





}




int main() {
    vector<char> ch = {'a', 'b', 'b', 'b', 'v', 'v', 'v'};
    int compressed_length = string_compressor(ch);

    cout << "Here is the compressed string: ";
    for (int i = 0; i < compressed_length; ++i) {
        cout << ch[i];
    }
    cout << endl;

    return 0;
}
