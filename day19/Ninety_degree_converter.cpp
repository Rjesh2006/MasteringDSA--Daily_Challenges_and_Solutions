#include<iostream>
#include<vector>
using namespace std;

vector<int>Ninty_degree_converter(vector<vector<int>>& mat){
    vector<int> ans;
    int count =0;
    int rows=mat.size();
    int cols=mat[0].size();
    int total= rows*cols;


    int starting_row= 0;
    int starting_col=0;


    int endofrow= rows-1;
    int endofcol=cols-1;




    while (count<total)
    {
       for (int i = starting_row; count<total && i <= endofrow; i++)
       {
        ans.push_back(mat[i][starting_col]);
         count++;
       }
       starting_col++;


       for (int i = starting_row; count<total && i <= endofrow; i++)
       {
        ans.push_back(mat[i][starting_col]);
        count++;
       }
       starting_col++;


        for (int i = starting_row; count<total && i <= endofrow; i++)
       {
        ans.push_back(mat[i][starting_col]);
         count++;
       }
       starting_col++;

       if (count >= total){
         break;
       

       
    }
    


}

return ans ;


}


void print_the_final_matrix(vector<int>& vector,int row , int col){
    
    int index=0;
    for (int i = 0; i <row; i++)
    {
       for (int j = 0;j< col; j++)
       {
        if (index < vector.size())
        {
            cout<<vector[index++]<<" ";

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

cout<<"here is your final matrix  :"<<endl;

vector<int> soreTHefinalan=Ninty_degree_converter(mat);
if (soreTHefinalan.empty())
{
    cout<<" the matirx is empty";

}else{
  print_the_final_matrix(soreTHefinalan,rows,cols);
 }

return 0;

 
}
