#include<iostream>
using namespace std;

// Binary search program

void binary_search(int arr[], int size) {
    int mid_value = size / 2;
    int key = 10;
    bool found = false;

    // Forward search from mid_value to end
    for (int i = mid_value; i < size; i++) {
        if (arr[i] == key) {
            cout << "Here we found the element and the index is: " << arr[i] << " " << i << endl;
            found = true;
            break;
        }
    }

    // Backward search from mid_value to start if not found in forward search
    if (!found) {
        for (int i = mid_value; i >= 0; i--) {
            if (arr[i] == key) {
                cout << "Here we found the element and the index is: " << arr[i] << " " << i << endl;
                found = true;
                break;
            }
        }
    }

    // If element is not found in both searches
    if (!found) {
        cout << "Element is not found here, try later" << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size here for the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Here the entered values are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    binary_search(arr, size);

    return 0;
}
