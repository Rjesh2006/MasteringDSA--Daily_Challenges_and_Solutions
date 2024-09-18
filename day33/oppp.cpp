#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<cstring>


class Hero {//is empty class will be here then the size wil be print as 1 for identificatio or  to store the trak of yours
    public:
    char *name;
    int health;
    string level;

    //now i wanna to get the value of the health 
//    int gethealth(){
//     cout<<"the health is here  :"<<health<<endl;

//         return health;
//     }
//    Hero(int health , string lavaal){
//     this->level=lavaal;//understand this line this-> level is specifies to the (classs objeect level) and laval is that which is take as argumnet by the class object form main function 
//     this ->health=health;//it measns that  this keyword is pointing to the current objet of the class so if we will print the this or  h1 so the both will print the same adresss
//     cout<<"contructor is called here"<<endl;
//     cout<<"here is the this adressses:"<<this<<endl;
//    }
// default _Construct is crated here
Hero() {
        name = new char[100];  // Allocate memory for name
        cout << "Default constructor called" << endl;
    }


//cpy contructor here 
// Hero(Hero& temp){
//     this->health=temp.health;
//     this->level=temp.level;
//     cout<<"copy contructor is called here :"<<endl;

// }
//manual cpyscontrustor for deep copy
Hero (Hero &h1){
char *ch=new char[strlen(h1.name)+1];
strcpy(ch,h1.name);
this->name=ch;
cout<<"cpy conctrucoter is called here "<<endl;
this->level=h1.level;
this->health=h1.health;




 Hero(){
        name = new char[100];  // Allocate memory for name
        strcpy(name, "Unknown");  // Initialize name
        health = 0;
        level = "Unknown";
        cout << "Default constructor called" << endl;
    }


    // void sethealth(int health_user_putted){
    //     health=health_user_putted;
    //     return;



    // }

    void print(){
        health=100;
        level="100thl_level";
        cout<<"print fn is called here"<<endl;
    }
    

};

int main(){


// Hero h1(10,"fourth level");
// cout<<"the size of hero is :"<<sizeof(h1)<<endl;
// //cout<<"here is the health and level values are :"<<endl<<h1.level;
// //calling functin to get the obejce value firm the orivate zoene
// h1.sethealth(164);
// cout<<endl<<h1.gethealth()<<endl;
// cout<<"here is the level is : "<<h1.level<<endl;
// cout<<"here is the adresss of the object (h1) : "<<&h1;
Hero h1;
h1.name[7]="barrah";
cout<<"the name is :"<<h1.name<<endl;



Hero *h3=new Hero();
Hero suresh(h1);
suresh.name[0]="r";
cout<<"the name foe the sresh object is :"<<suresh.name;
    return 0;

}