#include <iostream>
using namespace std;

int main() {
    int target;
    cout << "Enter target here: ";
    cin >> target;

    int arr[target];
    cout << "Enter the elements of the array here:" << endl;
    for (int i = 0; i < target; i++) {
         arr[i];  // Take input from the user
    }

    cout << "Your array elements are: ";
    for (int i = 0; i < target; i++) {
        cout << arr[i] << " ";  // Correct output statement
    }
    cout << endl;  // Add a new line at the end of output

    return 0;
}
