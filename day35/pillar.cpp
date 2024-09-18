#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
#include<cstring>

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
        strcpy(name,"unknow");
            strcpy(name,"unknow");
                cout<<"the defalut contrucotor is called here---------"<<endl;

  }

    
//here we are creating the copy sonstructor
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
    cout<<"fn called by this address of the object :"<<this<<endl;
    cout<<"the level is right now :"<<stage<<endl;
        cout<<"the place is :"<<place<<endl;
            cout<<"the name is :"<<name<<endl;
            //cout<<"herw wehave tht armers health is :"<<*main_armer_health<<endl;


}



};





int main(){
Pillar h1;
strcpy(h1.name," willaiam buther");
strcpy(h1.place,"timesquare");
strcpy(h1.stage,"level_54");

h1.display();

cout<<endl;
Pillar stand(h1);
strcpy(stand.stage,"at_level_o");
stand.display();
cout<<endl;
cout<<stand.place<<endl;



    return 0;
    
}
