#include <iostream>
using namespace std;

// Function to print intersection values
void intersection(int arr1[], int arr2[], int size1, int size2) {
    bool foundCommon = false; // Flag to check if there are any common elements or we can say that its  a bool variable so that if our condition wiil be true theen if it wiil be procceed forwardd then this bool will be store true and if condiot !foundman then we will use this bool variable so that we can say that for that condion is not true
       int i=0;
       int j = 0;

    // Iterate through both arrays to find common elements
while ( i < size1 && j <size2){
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                foundCommon = true;
               break ;// To avoid duplicate prints for multiple common elements ( mean that ki ek barr jo commonn ho gya  agar wohh phir se common hone ke liye aaaye to wohh map hi nahi hoga kyuiki wohhh phle wale sommon elements se map ho chuka hai or wahi pe hamne usse aage badhane se rok dia tha jisse ki wohh agge same ussi values se map hokar same thing doobara  na kar payein)
            else if  (arr1[i]< arr2[j])
            {
                i++;
            }
             
        }
        j++;
    }

    if // If no common elements were found
    (!foundCommon) {
        cout << "No common elements found";
    }
}
int main() {
    int size1, size2;
    
    // Input size and elements for the first array
    cout << "Enter size for the first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter the elements of the first array:" << endl;
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    // Input size and elements for the second array
    cout << "Enter size for the second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter the elements of the second array:" << endl;
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Print common elements
    cout << "Common elements are: ";
    intersection(arr1, arr2, size1, size2);
    cout << endl;

    return 0;
}
