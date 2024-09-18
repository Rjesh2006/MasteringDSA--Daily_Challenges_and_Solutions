#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<cstring>
#include<string>


class Pillar{
public:
    char *name;
    int *main_armer_health;
    char* stage ;
    char* place;


   Pillar(){
    name=new char[100]; 
    stage=new char[100]; 
    place=new char[100];
    main_armer_health=new int;
    strcpy(name,"unknow");//first assing the unknow as chrccter to the memeber of the class 
        strcpy(place,"unknow");
            strcpy(stage,"unknow");

  }

    
//here we are creating the DEEP copy sonstructor this is mean that when we want to chenge the any member of the classs by the e
 Pillar( Pillar &anyobject){
    cout<<"here copy constructoe is called --------"<<endl;
      name=new char[(strlen(anyobject.name)+1)];
             strcpy(name,anyobject.name);

               place=new char[(strlen(anyobject.place)+1)];
                   strcpy(place,anyobject.place);

                   stage=new char[(strlen(anyobject.stage)+1)];
                       strcpy(stage,anyobject.stage);
}

void display(){
    cout<<"functiono of pillar class ---------"<<endl;
    cout<<"fn called by this address of the object :"<<this<<endl;
    cout<<"the level is right now :"<<stage<<endl;
        cout<<"the place is :"<<place<<endl;
            cout<<"the name is :"<<name<<endl;
            //cout<<"herw wehave tht armers health is :"<<*main_armer_health<<endl;


}

};


class Frechy{
    public:
        int levelininteger;//this member is for to inhsritete form ohter class and w can also chekk is it workignig r not


        void display_of_frency_class(){
            cout<<"inside the frenchy calss function ------"<<endl;

        };




};
//this the exmple of the multiple inhsritanc class
class Thethirdone:public Pillar,public Frechy{
    public:
   string color;

    void the_thethidone_classses_fucntion(){
        cout<<"here this function is isndid the thirdone which have the color member :"<<color<<endl;
    }


    void operator()(){
        cout<<"this funtion can be called by the ()  also"<<endl;

    }
};


int main(){
Pillar h1;
strcpy(h1.name," willaiam buther");
strcpy(h1.place,"timesquare");
strcpy(h1.stage,"level_54");


strcpy(h1.stage,"at theleveo _peak ");
//h1.display();

cout<<endl;
Pillar stand(h1);
strcpy(stand.stage,"at_level_o");
//stand.display();
cout<<endl;
//cout<<stand.place<<endl;



//inhariting the class pillar form the frency class 

Frechy f1;
f1.levelininteger=45;
//f1.display();






Thethirdone th3;
// th3.color="the_purple";
// th3.display_of_frency_class();
// cout<<endl;
// th3.the_thethidone_classses_fucntion();
// cout<<endl;
// cout<<"clling the pillar class fucntion's----------"<<endl;
// th3.display();
// strcpy(th3.stage,"the_levelis=0_");
// cout<<"here we updated the stage member if the clss o pilar by the thirdone class"<<th3.stage<<endl;

// is_polymorphism
//opereator overloadinngis nothing bro just addd aoperator word as fucntion name and  at the time of creation of  the funtion after parenthessi addd asign a operator there  so that we can use that operator as function in main function with the object 

th3();
    return 0;
    
}









//opereator overloadinngis nothing bro just addd aoperator after at the time of creation of  the funtion after parenthessi addd asign a operator there  so that we can use that operator as function in main function with the object 
