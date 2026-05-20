#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingridents;

        //deligation/deligating constructor 
        Chai(string name):Chai(name,1,{"WATER","TEA LEAVES"}){};


        //main constructor 
        Chai(string name, int serv, vector<string> ingri){
            teaName=name;
            servings=serv;
            ingridents=ingri;

            cout<< "MAIN CONSTRUCTORE CALLED!" << endl;
        };
         void getoutput(){
            cout<<"YOUR TEA NAME \n"<< teaName;
            cout<<"THE NUMBER OF TIMES BEING SERVED IS \n "<< servings;
            for(string ingrident:ingridents){
                cout<<"YOUR INGRIDENT IS: \n "<<ingrident<<"\n";
            }
        }

};


int main(){

    Chai quickChai("Quick chai");
    quickChai.getoutput();

    return 0;
}