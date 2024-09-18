#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool issafe(const vector<vector<int>> maze, const vector<vector<int>> &visited, int size, int x, int y) {
    return (x >= 0 && x < size && y >= 0 && y < size && maze[x][y] == 1 && visited[x][y] == 0);
}

void solve(vector<vector<int>> &maze, vector<string> &ans, int size, int x, int y, vector<vector<int>> &visited, string paths) {
    if (x == size - 1 && y == size - 1) {
        ans.push_back(paths);
        return;
    }

    if (!issafe(maze, visited, size, x, y)) {
        return;
    }

    visited[x][y] = 1;

    if (issafe(maze, visited, size, x + 1, y)) {
        solve(maze, ans, size, x + 1, y, visited, paths + 'D');
    }

    if (issafe(maze, visited, size, x - 1, y)) {
        solve(maze, ans, size, x - 1, y, visited, paths + 'U');
    }

    if (issafe(maze, visited, size, x, y - 1)) {
        solve(maze, ans, size, x, y - 1, visited, paths + 'L');
    }

    if (issafe(maze, visited, size, x, y + 1)) {
        solve(maze, ans, size, x, y + 1, visited, paths + 'R');
    }

    visited[x][y] = 0;
}

int main() {
    int size;
    cout << "Enter the size of the maze: ";
    cin >> size;

    vector<vector<int>> maze(size, vector<int>(size));

    cout << "Enter the elements (only 0, 1) for the maze matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> maze[i][j];
        }
    }

    vector<vector<int>> visited(size, vector<int>(size, 0));
    vector<string> ans;
    string paths = "";

    if (maze[0][0] == 1) {
        solve(maze, ans, size, 0, 0, visited, paths);
    }
     sort(ans.begin(),ans.end());
    cout << "Here we are printing the strings of directions to reach the destination  :" ;
     for (const &str : ans)
    {
       cout<<str;

    }
    return 0;
}






