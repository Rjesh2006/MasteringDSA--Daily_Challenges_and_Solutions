#include <iostream>
using namespace std;



void insertion_sorting ( int arr[], int size){
 bool issorted= true;
for (int i = 1; i <size; i++)
{   
    int temp = arr[i];
    int j = i-1;
    while (j>=0 && arr[j]> temp)//here we saved a if condition 
    {
      arr[j+1]= arr[j];
      j--;
      issorted=false;

    }
    arr[j+1]=temp;

   }
    if (issorted)
    {
    cout <<" its already sorted ";

    }


}




int main() {
    int size;
    cout << "Enter the size of the array here: ";
    cin >> size;

    int array[size];
    cout << "Enter the elements for the array here: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    insertion_sorting(array, size);

    cout << endl << "Here are your sorted array elements: ";
    for (int k = 0; k < size; k++) {
        cout << array[k] << " ";
    }

    return 0;
}
