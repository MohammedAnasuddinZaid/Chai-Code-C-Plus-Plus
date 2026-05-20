//check again ABSTACTION & derived classes 
//check again ABSTACTION & derived classes
//check again ABSTACTION & derived classes 
//check again ABSTACTION & derived classes
//check again ABSTACTION & derived classes 
//check again ABSTACTION & derived classes
//check again ABSTACTION & derived classes 
//check again ABSTACTION & derived classes
//check again ABSTACTION & derived classes 
//check again ABSTACTION & derived classes
//check again ABSTACTION & derived classes 
//check again ABSTACTION & derived classes
//check again ABSTACTION & derived classes 
//check again ABSTACTION & derived classes
//check again ABSTACTION & derived classes 
//check again ABSTACTION & derived classes

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//abstract class
class Tea{
    public:
        virtual void prepareIngridents()=0;
        virtual void brew()= 0;
        virtual void serve()=0;

    void makeTea(){
        prepareIngridents();
        brew();
        serve();
    }
};

//derived class

class GreanTea:public Tea{

public:
    void prepareIngridents() override {
        cout<< "GREEN LEAVES AND WATER IS READY"<<endl;
    }

    void brew() override {
        cout<< "Tea brewed"<<endl;
    }

    void serve() override {
        cout<< "Tea served"<<endl;
    }
};

//as derived class was made now i can copy past it and directley use it 
class MasalaTea:public Tea{

public:
    void prepareIngridents() override {
        cout<< "GREEN LEAVES AND WATER IS READY WITH MASALA"<<endl;
    }

    void brew() override {
        cout<< "MASALA Tea brewed"<<endl;
    }

    void serve() override {
        cout<< "MASALA Tea served"<<endl;
    }
};

int main(){

    GreanTea greentea;
    MasalaTea masalatea;

    greentea.makeTea();
    masalatea.makeTea();

    return 0;
}





