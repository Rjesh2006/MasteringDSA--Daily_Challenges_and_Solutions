#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    
    while (i <= n) {
       
          int space =n-i+1;
            while(space){
               //cout <<" ";
               space=space-1;

        }




        int j = 1; 
        while (j <= i) {
                i+j-1;

            cout << "*";

            j = j + 1;
        }


        cout<<"\n";
        i += 1;
        
    }

   
    return 0;
}














