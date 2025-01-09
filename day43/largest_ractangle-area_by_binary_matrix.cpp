#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> next_smaller_finder(vector<int> arr, int n) {
    vector<int> ans(n, -1);
    stack<int> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--) {
        while ((st.top() != -1) && (arr[st.top()] >= arr[i])) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prev_smaller_finder(vector<int> arr, int n) {
    vector<int> ans(n, -1);
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < n; i++) {
        while ((st.top() != -1) && (arr[st.top()] >= arr[i])) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largest_recangular_area(vector<int> height, int n) {
    vector<int> next = next_smaller_finder(height, n);
    vector<int> prev = prev_smaller_finder(height, n);
    int area = INT_MIN;
    for (int i = 0; i < n; i++) {
        int width = next[i] - prev[i] - 1;
        if (next[i] == -1) {
            width = n;
        }
        int new_area = height[i] * width;
        area = max(area, new_area);
    }
    return area;
}

int largest_rectangular_area_form_binary_matrix(vector<vector<int>>& matrix, int n, int m) {
    int area = largest_recangular_area(matrix[0], m);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != 0) {
                matrix[i][j] += matrix[i - 1][j];
            }
        }
        area = max(area, largest_recangular_area(matrix[i], m));
    }
    return area;
}

int main() {
    vector<vector<int>> matrix = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0}
    };
    int n = matrix.size();
    int m = matrix[0].size();
    int max_area = largest_rectangular_area_form_binary_matrix(matrix, n, m);
    cout << "The maximum rectangular area is: " << max_area << endl;
    return 0;
}
