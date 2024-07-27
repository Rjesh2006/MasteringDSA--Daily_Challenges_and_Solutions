#include<iostream>
using namespace std;
#include<vector>

 void plw(vector<vector<int>>& arr){
    
    for (int i = 0; i < 3; i++)
    {
     if(i & 1){//for odd col  managing row's to upperside
        for (int j =2; j>=0; j--)
        {
           cout<< arr[j][i]<<" ";

        }
        
     }else{//for even col managing row's to lwerside

       for(int j =0; j<3;j++){

      cout<< arr[j][i]<<" ";
       }

      }
      cout<<endl;


    }


 }



int main(){
     
 vector<vector<int>> vec(3, vector<int>(3));

    // Taking input for the 2D vector
    cout << "Enter the elements of the 3x3 vector:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> vec[i][j];
        }
       
    }


cout<<"here is ur enterred array elements as matrix from-->"<<endl;
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          cout<<vec[i][j]<<" ";
        }
       cout<<endl;

    }
cout<<endl;


//

    // function called 
    cout<<"her is the elemetn is printed like plw--: "<<endl;
    plw(vec);
   
     return 0;


}
