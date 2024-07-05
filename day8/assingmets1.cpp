//alternate reverse of an array integers:--

#include<iostream>
using namespace std;




 void  alternate_reverse(int arr[] ,int size){


//     cout<<"inside the funstion here ";
//     cout <<endl;

//   int p_a=0;
//   int a_p=size-1;


//   while (p_a<=a_p){
//     swap(arr[p_a],arr[a_p]);
//     p_a++;

//     a_p--;

//   }


int i=0;
//int j=1;
//int j=size-1;
while ( i+1<size){

swap (arr[i],arr[i+1]);


   // swap(arr[i],arr[j]);


    i=i+2;
    //j--;
}








};







int main (){
   int size;
   cout <<"Enter the size here :";
   cin>> size;
   cout <<endl;
    int arr[size];


    cout <<"Enter the integers her for the array: ";
    for (int i = 0; i<size; i++){
        
    cin>>arr[i];



};
cout<<endl;


cout <<"The arrray bfore elemetss are   : ";
for (int i=0;i<size ;i++){ 
cout <<" " <<arr[i];
};

cout<<endl;

alternate_reverse(arr,size);


cout<<"Here  we have the afater  reverse intger value of array:";
for (int i =0;i<size;i++){
cout << " "<<arr[i];
};

return 0;



    
     
}