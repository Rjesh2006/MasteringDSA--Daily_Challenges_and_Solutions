#include<iostream>
#include<vector>
using namespace std;



vector<int>spiralorder(vector<vector<int>>& matrix){

vector<int> ans;

  if (matrix.empty()) {
        return ans;  
    }

int nrow = matrix.size();

int ncol= matrix[0].size();



int count =0;
int total= nrow*ncol;

int starting_row= 0;
int starting_col=0;
int ending_row=nrow-1;
int ending_col=ncol-1;


while (count <total)
{
  for (int index =starting_col; count<total && index<=ending_col;index++)
  {
   ans.push_back(matrix[starting_row][index]);
   count++;

  }
  starting_row++;


 for (int index =starting_row; count<total && index<=ending_row;index++)
  {
   ans.push_back(matrix[index][ending_col]);
   count++;

  }
ending_col--;



  for (int index =ending_col; count<total && index>=starting_col;index--)
  {
   ans.push_back(matrix[ending_row][index]);
   count++;

  }
ending_row--;



  
  for (int index =ending_row; count<total && index>=starting_row;index--)
  {
   ans.push_back(matrix[index][starting_col]);
   count++;

  }

starting_col++;

  

  
}


return ans;
}





void print_thefinal_matrix(vector<int>& vector,int row , int col){
    
    int index=0;
    for (int i = 0; i <row; i++)
    {
       for (int j = 0;j< col; j++)
       {
        if (index < vector.size())
        {
            cout<<vector[index++]<<" ";

        }else{
            cout<<" your vecotr is empty";

        }
        
        
       }
       cout<<endl;
     

    }
    
}






int main(){
    int rows,cols;
    cout<<" enter the number of rows here :";
    cin>>rows;


    cout<<" enter the number of the cols here :";
    cin>>cols;


vector<vector<int>>mat(rows,vector<int>(cols));
cout<<"enter the elements of the vectorer here:"<<endl;
for (int i = 0; i <rows; i++)
{
   for (int j = 0; j<cols; j++)
   {
    cin>>mat[i][j];
   }
   
}

cout<<endl;

cout<<"here is your final matrix i spiral form :"<<endl;

vector<int> soreTHefinalan=spiralorder(mat);
if (soreTHefinalan.empty())
{
    cout<<" the matirx is empty";

}else{
  print_thefinal_matrix(soreTHefinalan,4,4);
 }

return 0;

 
}
