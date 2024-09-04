#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[s];  // Pivot is the first element
    int count = 0;

    // Count elements less than or equal to the pivot
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }

    // Find the correct index for the pivot element
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);  // Place the pivot at its correct position

    // Initialize pointers for rearranging elements
    int i = s;
    int j = e;

    // Arrange elements such that elements < pivot are on the left and > pivot are on the right
    while (i < pivotIndex && j > pivotIndex) {
        
        // Move the left pointer until an element greater than or equal to pivot is found
        while (arr[i] < pivot) {
            i++;
        }
        
        // Move the right pointer until an element less than or equal to pivot is found
        while (arr[j] > pivot) {
            j--;
        }
        
        // Swap the elements that are out of place
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;  // Return the final index of the pivot element
}

void quick_sort(int arr[], int s, int e) {
    if (s >= e) {
        return;  // Base case: If the array has one or no elements, it's already sorted
    }

    int p = partition(arr, s, e);  // Partition the array and get the pivot index

    quick_sort(arr, s, p - 1);  // Recursively sort the left part of the array
    quick_sort(arr, p + 1, e);  // Recursively sort the right part of the array
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    cout << endl;

    int* arr = new int[size];
    cout << "Enter the elements here: " << endl;
    
    for (int i = 0; i < size; i++) {  // Corrected loop condition to avoid out-of-bounds access
        cin >> arr[i];
    }

    quick_sort(arr, 0, size - 1);  // Sort the array using Quick Sort

    cout << "Here is the quick sorted array: " << endl;
    
    for (int i = 0; i < size; i++) {  // Corrected loop condition to avoid out-of-bounds access
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;  // Free dynamically allocated memory
    return 0;
}
