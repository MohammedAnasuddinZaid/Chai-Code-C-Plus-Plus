#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
        string Teaname;
        int serving;
        vector<string> ingrediants;

        //default constructor
        Chai(){
            Teaname="IDK"; 
            cout<< "CONSTRUCTOR CALLED\n\n";
        }

        void showingdata(){
            cout<<"YOUR TEA TYPE IS "<<Teaname<<"\n";
            for(string ingreiant:ingrediants){
                cout<< "THE INGRIDENTS ARE \n"<< ingreiant<< "\n\n";
            }
        }
};

int main(){

    Chai chai;

    chai.ingrediants={"chai","milk"};

    chai.showingdata();


    return 0;
}