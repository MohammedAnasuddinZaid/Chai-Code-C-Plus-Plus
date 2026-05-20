//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//
//once again go throught this//

#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
        string* Teaname;
        int serving;
        vector<string> ingrediants;

        //parameter constructor
        Chai(string name, int serve, vector<string> ingri){
            Teaname=new string (name);
            serving=serve;
            ingrediants=ingri; 
            cout<< "CONSTRUCTOR CALLED\n\n";
        }


        //COPY CONSTRUCTOR
        Chai(Chai& other){
            Teaname = new string(*other.Teaname);
            serving= other.serving;
            ingrediants= other.ingrediants;
            cout<< " COPY CONSTRUCTOR IS CALLED \n\n"<<endl;

        }


        //DESTRUCTOR J  
        ~Chai(){
            delete Teaname;
            cout << "DESTRUCTOR CALLED \n\n"<<endl;
        }

        void showingdata(){
            cout<<"YOUR TEA TYPE IS "<< *Teaname<<"\n\n";
            cout<< " NUMBER OF SERVINGS ARE "<< serving<<"\n\n";

            cout<< "THE INGRIDENTS ARE \n";
            for(string ingreiant:ingrediants){
                
                cout<< ingreiant<<",";
            }
        }
};

int main(){

    Chai chai("APNECHAI",4,{"WATER","MILK"});


    chai.showingdata();

    //copy the object
    Chai copiedchai= chai;
    copiedchai.showingdata();

    *chai.Teaname="LEAMON TEA";
    chai.showingdata();

    return 0;
}