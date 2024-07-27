#include <iostream>

using namespace std;

int element_finder(int arr[3][3], int target) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == target) {
                return arr[i][j];
            }
        }
    }
    return -1;  
}

int largest_sum_finder(int arr[3][3], int target) {
    int max = INT_MIN;
    int rowWithMaxSum = -1;

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        if (sum > max) {
            max = sum;
            rowWithMaxSum = i;
        }
    }

    cout << "The sum of the row with the largest sum is: " << max << endl;
    int element = element_finder(arr, target);
    if (element != -1) {
        cout << "The element " << target << " was found in the array." << endl;
    } else {
        cout << "The element " << target << " was not found in the array." << endl;
    }

    return rowWithMaxSum;
}

int main() {
    int arr[3][3];
    int target;

    cout << "Enter the elements of the array column-wise -->:" << endl;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter the target element to find: ";
    cin >> target;

    cout << endl << "Here are your entered elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int result = largest_sum_finder(arr, target);
    cout << "The row with the largest sum is at index: " << result << endl;

    return 0;
}
