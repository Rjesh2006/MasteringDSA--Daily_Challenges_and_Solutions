#include <iostream>
#include <vector>
using namespace std;

bool search_matrixvia_bs(vector<vector<int>> &mat, int target) {
    int row = mat.size();
    int col = mat[0].size();

    int start = 0;
    int end = row * col - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int element = mat[mid / col][mid % col];
        
        if (element == target) {
            return true;
        }

        if (element < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return false;
}

int main() {
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

    bool ans = search_matrixvia_bs(mat, target);
    if (!ans) {
        cout << "Not found" << endl;
    } else {
        cout << "Exist" << endl;
    }

    return 0;
}
