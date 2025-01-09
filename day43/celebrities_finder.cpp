#include<iostream>
#include<stack>
using namespace std;

int celbrities_finder(int arr[][4], int n) {
    stack<int> st;

    // Push all indices into the stack
    for (int i = 0; i < n; i++) {
        st.push(i);
    }

    // Find potential celebrity
    while (st.size() > 1) {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        if (arr[a][b] == 1) {
            // a knows b, so a cannot be a celebrity
            st.push(b);
        } else {
            st.push(a);
        }
    }

int Candidate  = st.top();
 for (int  i = n; i < n; i++)
 {
    if(i!=Candidate && (arr[Candidate][i]!=0||arr[i][Candidate]!=1)){
        return -1;
    }
 }
 

    return Candidate;
}

int main() {
    int arr[4][4] = {
        {0, 0, 1, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 0}, 
        {0, 0, 1, 0}
    };

    int n = 4;
    int result = celbrities_finder(arr, n);

    if (result != -1) {
        cout << "Person " << arr[0][result] << " (index " << result << ") is the celebrity." << endl;
    } else {
        cout << "There is no celebrity." << endl;
    }

    return 0;
}

