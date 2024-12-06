// Exercise on Abstract Base Class & Pure Virtual Functions in C++
#include <iostream>
#include <cstring>
using namespace std;

class Tesla{
    protected:
        string Model;
        int Battery_Life;
        
    public:
        Tesla(string m,int b){
            Model = m;
            Battery_Life = b;
        }
    
    virtual void display() = 0;
};

class Model_x : public Tesla{
    protected:
        string New_door;
    public:
        Model_x(string m, int b , string N_D): Tesla(m,b){
            New_door = N_D;
        }  
        void display(){
            cout<<"The Name of this model is "<< Model << endl;
            cout<<"This New Tesla model has : "<< New_door << " Kind of door"<<endl;
            cout<<"And This model hase Battery of "<< Battery_Life << " Hours"<<endl;
        }
};

class Model_Y : public Tesla{
    protected:
        string New_Solar;
    public:
        Model_Y(string m, int b , string N_S): Tesla(m,b){
            New_Solar = N_S;
        }  
        void display(){
            cout<<"The Name of this model is "<< Model << endl;
            cout<<"This New Tesla model has : "<< New_Solar << " Kind of Solar system which comsume less Electricity"<<endl;
            cout<<"And This model hase Battery of "<< Battery_Life << " Hours"<<endl;
        }
};

int main(){
    int Battery_Life;
    string Model;
    string New_door;
    string New_Solar;

    Model = "Tesla Model x";
    New_door = "falcon Wing Doors";
    Battery_Life = 23;
    Model_x NewX(Model,Battery_Life,New_door);

    Model = "Tesla Model y";
    New_Solar = "Tesla Solar Roof ";
    Battery_Life = 32;
    Model_Y NewY(Model,Battery_Life,New_Solar);

    Tesla *Mode[2];

    Mode[0] = &NewX;
    Mode[1] = &NewY;

    Mode[0]->display();
    Mode[1]->display();


    return 0;
}