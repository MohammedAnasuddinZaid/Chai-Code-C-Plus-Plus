#include <iostream>
#include <string>
#include <vector> 

using namespace std;

class Chai {
public:
    //data member (atribute)
    
    string teaName; //name of tea
    int serving; // Number of serving
    vector<string> ingridents; //list of ingridents for the tea
    

    //Member Function

    void displayofthing(){
        cout<<"UR TEA NAME IS "<< teaName <<"\n\n";
        cout<<"serving "<< serving<<"\n\n";
        for(string ingrident: ingridents){
            cout << ingrident<< " " ;
        }

        cout<<endl;
    }

};


int main(){

    Chai chaiOne;

    chaiOne.teaName = "LEAMON TEA ";
    chaiOne.serving = 2;
    chaiOne.ingridents= {"TEA LEAVES","PATTI","SUGER","LEAMON LEAVES"};

    chaiOne.displayofthing();

    Chai chaitwon;

    chaitwon.teaName="MASALA TEA";
    chaitwon.serving= 5;
    chaitwon.ingridents={"MASALA","ILAICHI","MILK"};

    chaitwon.displayofthing();

    return 0;
}