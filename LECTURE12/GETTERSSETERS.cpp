#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai {
    private:
        string Teanames;
        int servings;
        vector<string> ingridents;

    public:
        Chai(){
            Teanames="Unknows tea";
            servings=1;
            ingridents={"water","tea leaves"};
        }
        //paramatric constructor
        Chai(string name,int serve,vector<string>ingri){
            Teanames=name;
            servings=serve;
            ingridents=ingri;
        }

        //getter
        string getTeaName(){
            return Teanames;
        }

        //setter
        void setTeaname(string name){
            //logic
            Teanames=name;
        }

        //getter serving
        int getservings(){
            return servings;
        }

        //setter servings
        void setservings(int serve){
            servings=serve;
        }
        //getter for ingrindents
        vector<string> getingridents(){
            return ingridents;
        }
        //setter for ingridents
        void getingridents(vector<string> ingriden){
        ingridents=ingriden;
        }

        void getoutput(){
            cout<<"YOUR TEA NAME \n"<< Teanames;
            cout<<"THE NUMBER OF TIMES BEING SERVED IS \n "<< servings;
            for(string ingrident:ingridents){
                cout<<"YOUR INGRIDENT IS: \n "<<ingrident<<"\n";
            }
        }



};

int main(){
    Chai chai;
    chai.setTeaname("MASAL CHAI");
    chai.getoutput();

    return 0;
}