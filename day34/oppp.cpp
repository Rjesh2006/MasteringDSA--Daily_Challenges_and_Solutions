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
        static int stativaraible;//static variable is used to without object it can directly acess by th class name and resolution operator 

      Hero(){
        name =new char[100];
        strcpy(name,"unknow");
                cout<<"defautl constructoer is called here:"<<endl;
    }

        Hero(const Hero &h1){
            cout<<"manual copy constructor is called here ---------"<<endl;
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
            delete[]name;// destructor will be called by 2 times only for the  static object (and remember that  for dynamically allocated object as h2 to delete that conctrucotr we have to dlete that objecet by manually within hte main function)

        }

        static int static_funtion(){
            cout<<"it can acess only  sttiatic so we can use staticvariable whihc is we created previously for sttic member so it can acesss tto that static members !!!:"<<stativaraible<<endl;
            return stativaraible;
        }


};  // its ccompalsary in calass afer the class defination we have to block that class

int Hero::stativaraible =10;//to modify we have to do ouutside of all


int main(){
Hero h1;
h1.health=145;
h1.body_weath=89;
strcpy(h1.name,"superman");

h1.display();
cout<<"strt to call the  suresh object withh copy contruscoter "<<"------------"<<endl<<endl;


Hero *h2=new Hero();
delete h2;
cout<<endl<<"here we are deleting the  dynamically alllocated object by -->delete h2"<<endl<<endl;



Hero suresh(h1);
strcpy(suresh.name,"Duperman");
suresh.display();
cout<<endl;

//here wee are printing the  static a staticvariable 
Hero a;
cout<<"static varivable printing here "<<Hero::stativaraible<<endl;//print karwane ke liyr kabhi data type ka name nahi llikhte
cout<<"wecan also do like this but we its noe the good way to do a.stativariable :"<<a.stativaraible<<endl;//its not the good way to do that 

//now here we are printing the sttic functio 
Hero fn;
Hero::static_funtion();
fn.static_funtion();//its not goo d way


return 0;
}