#include <iostream>
using namespace std;

void sumof_accurence(int arr[], int size, int key, int *count) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            *count += 1;
            end = mid - 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
}

void lastsumof_faccurence(int arr[], int size, int key, int *count) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            *count += 1;
            start = mid + 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
}

int main() {
    int count;

    int size;
cout<<" ENTER THE SIZE HERE:";
cin>>size;
int arr[size];
cout<< " Enter the elements of the arrya here:"<<endl;
for (int  i = 0; i < size; i++)
{
   cin>> arr[i];

}


cout << " Here is yours enterred elements of this array:";
for (int i = 0; i < size; i++)
{
    cout <<" "<< arr[i];
};



int key;
cout << endl<< "Eter the key here:";
cin>> key;
    sumof_accurence(arr, size, key, &count);
     lastsumof_faccurence(arr, size, key, &count);

    cout << "The final count is :" << count << endl;

    if (count > 0) {
        cout << "Here is the sum of the occurrence element " << key << " : " << count * key << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}
