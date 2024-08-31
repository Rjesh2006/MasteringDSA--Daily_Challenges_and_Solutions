#include<iostream>
using namespace std;


void reachedthe_the_dest(int *src, int *dest){
    cout<<"souces is here: "<<*src<<" destination is here: "<<*dest<<endl;

    if (*src==*dest)
    {
        cout<<"hence the source is got to the destination  here "<<endl;


       return ;

    }



   (*src)++;

    reachedthe_the_dest(src,dest);

    


   
}



int main(){
   


   int source= 1;

   int destination = 10;
   cout<<"Function executing here------------- "<<endl;
   reachedthe_the_dest(&source, &destination);



    return 0;

}