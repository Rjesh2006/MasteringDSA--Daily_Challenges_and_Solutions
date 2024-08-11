#include<iostream>
using namespace std;


int main (){

int row;

cout<<"enter row:";
cin>>row;

cout<<endl;



int col;
cout<<"ener col:";
cin>>col;


int** arr=new int*[row];
for (int i = 0; i <row; i++)
{
   arr[i]=new int[col];

}


cout<<"enter the elements for the array : "<<endl;
for (int i = 0; i < row; i++)
{
   for (int j = 0; j < col; j++)
   {
    cin>>arr[i][j];

   


   }
 

   
}

cout<<"Here is ur enterrd array elements as matrix form: "<<endl;
for (int i = 0; i < row; i++)
{
   for (int j = 0; j < col; j++)
   {
    cout<<arr[i][j]<<" ";

   


   }
 
cout<<endl;

   
}



//now we have to note that we have to remove diallocate the array or which memory address is locateed by the poointer in the heap 


//here we have deleted the array for which was created for  the particular row.
for (int i = 0; i <row; i++)
{
  

   delete[] arr[i];


}

//noe here we are delting th main pointer that we created for the row arry which has pointer iside that  
delete []arr;





    return 0;

}
