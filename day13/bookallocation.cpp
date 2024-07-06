#include <iostream>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid) {
    int student_count = 1; // Start with 1 student
    int pagesum = 0;

    for (int i = 0; i < n; i++) {
        if (pagesum + arr[i] <= mid) {
            pagesum += arr[i];
        } else {
            student_count++;//dushre bande ke liye 
            if (student_count > m || arr[i] > mid) {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int book_allocator(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e) {
        if (ispossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter the n and m here: ";
    cin >> n >> m;
    cout << endl;

    int arr[n];
    cout << "Enter the " << n << " elements for the array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Here are your entered elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int result = book_allocator(arr, n, m);
    if (result!=-1)
    {
        /* code */
    
    
    cout << "The minimum number of pages: " << result << endl; 
    }else{
        cout <<"mid not setisfied for the pages allotment to the student as minimum ";// bhai nahi hoga cant be alloteated the pages to the student as minimum pages they should  read and that that should be equal to or sammler that from the maximum pages of total book for the 2 student ";
    }
    return 0;
}
