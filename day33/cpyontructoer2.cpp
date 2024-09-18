#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

class Hero{
    public:
        char* name;
        int health;
        int body_weath;

      Hero(){
        name =new char[100];
        strcpy(name,"unknow");
                cout<<"defautl constructoer is called here:"<<endl;
    }

        Hero(const Hero &h1){
            cout<<"manual copy constructor is called here ---------"<<endl<<endl;
            name= new char[strlen(h1.name)+1];
            strcpy(name,h1.name);

            //also copy this all thinks 
            health=h1.health;
            body_weath=h1.body_weath;
        }

   

        void display() {
            cout << "Object address: " << this << endl;
            cout << "Name: " << name << endl;
            cout << "Health: " << health << endl;
            cout << "Body Wealth: " << body_weath << endl;
        }

    ~Hero(){
            cout<<"destrucotr is called hre~~~"<<endl;
            delete[]name;

        }


};  // its ccompalsary in calass afer the class defination we have to block that class



int main(){
Hero h1;
h1.health=145;
h1.body_weath=89;
strcpy(h1.name,"superman");

h1.display();
cout<<"strt to call the  suresh object withh copy contruscoter "<<"------------"<<endl<<endl;


Hero suresh(h1);
strcpy(suresh.name,"Duperman");
// suresh.health=345;                     //if we uncommnet this thinks then  suresh object will be modify the objects and it will not be chnge in the h1 object 
// suresh.body_weath=23432423;
suresh.display();

return 0;
}