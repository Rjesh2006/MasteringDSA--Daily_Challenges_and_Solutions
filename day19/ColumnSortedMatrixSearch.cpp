#include<iostream>
#include <vector>
using namespace std;


bool search_matrix(vector<vector<int>>& matrix,int target){
    vector<int> ans;
    int row = matrix.size();
    int col= matrix[0].size();



    int starting_rawindex= 0;
    int end_col_index=col-1;

    while (starting_rawindex<row && end_col_index>=0)
    {
       int element = matrix[starting_rawindex][end_col_index];
       if (element==target)
       {
        return 1;

       }
       
       
    if (element<target)
    {
       starting_rawindex++;

    }else{
        end_col_index--;

    }



    
}
return 0;

}


int main(){

int rows, cols;
    cout << "Enter the number of rows here: ";
    cin >> rows;

    cout << "Enter the number of the cols here: ";
    cin >> cols;

    vector<vector<int>> mat(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix here:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    int target;
    cout << "Enter the target here: ";
    cin >> target;
    cout << endl;

    bool ans = search_matrix(mat, target);
    if (!ans) {
        cout << "Not found" << endl;
    } else {
        cout << "Exist" << endl;
    }


    return 0;
}
