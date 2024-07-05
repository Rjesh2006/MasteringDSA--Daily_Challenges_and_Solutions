#include <iostream >
using namespace std;

// here we have the fn foor the maximum value inn array:-------

int getmin(int array[],int size){ 
    int min = INT_MAX;

int sum = 0;
for ( int i=0 ; i <= size; i++){
        sum += array[i];

    if (array[i]<min)
    {
        min =array[i];
    }

}
cout<<"getmin callled here:";
cout<<min<<endl;
cout<<endl<<"'yehh wwala programme bhi isssi mai daal dia hamne and also here we have the sum of the array values "<<sum<<endl;

    return min;

};


// haere we hae the getmin fn whichh will give us the min value of the array :----
int getmax(int array[],int size){ 
    int max = INT_MIN;
for ( int i=0 ; i <= size; i++){

    if (array[i]>max )
    {
        max =array[i];}
}

cout<<"getmax callled here:";
cout<<max<<endl;
cout<<endl;
    return max;
};


// From here we are starting tour main functionn :--------
int  main (){
int size;
cout <<" Enter size here: ";
cin>>size;

int arr[100];

     cout <<" Enter the intgers values here for array:"<<endl;
    for (int i = 0; i <size; i++)
    {  
        cin>>arr[i];


        cout<<"here  your enterred integer at index:"<<i<<" = "<<arr[i]<<endl;
    
     
};
cout<<endl;

  getmax(arr,size);
       getmin(arr ,size);

return 0;
}