#include <iostream>
using namespace std;



int firstaccurence( int arr[], int size , int key){
int start=0;
int End =size-1;
int ans =0;
int mid=( start + End)/2;


    int i =0;
    while (start<=End)
    {
        if (arr[mid]==key)
        {
            
            ans = mid;
        End= mid -1;// we need the last accurence index of that repeating element so we incrimeted it to the 


        }
        else if (key >arr[mid])
        {
        start=mid +1;


        }
        else if (key < arr[mid])
        {
          End= mid -1;

        }
        mid =start+(End-start )/2;
    }
    
cout<<endl<<"   The index of that firstaccurence for element  "<<key<<"  is : "<<ans;

return ans;

}



int lastaccurence( int arr[], int size , int key){
int start=0;
int End =size-1;
int ans =0;
int mid=( start + End)/2;


    int i =0;
    while (start<=End)
    {
        if (arr[mid]==key)
        {
            
            ans = mid;
        start= mid +1;// we need the last accurence index of that repeating element so we incrimeted it to the 


        }
        else if (key >arr[mid])
        {
        start=mid +1;


        }
        else if (key < arr[mid])
        {
          End= mid -1;

        }
        mid =start+(End-start )/2;
    }
    
cout<<endl<<"   The index of that firstaccurence for element  "<<key<<"  is : "<<ans;

return ans;

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

    int key;
    cout<< " Enter the key here:";
    cin>> key;
    cout<<" ";

    // binary_search(arr, size);


cout<<" The function processing :-----";
    firstaccurence( arr, size , key);
    lastaccurence(arr, size,key);


    return 0;


}