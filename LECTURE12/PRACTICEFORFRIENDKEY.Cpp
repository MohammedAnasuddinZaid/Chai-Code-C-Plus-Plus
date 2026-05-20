#include <iostream>
#include <string>
#include <vector>

using namespace std;




class Chai {GETTERSSETERS
    private:
        string Teanames;
        int servings;
        vector<string> ingridents;

    public:
        string getdisplay(){
            cout<<"YOUR TEAS NAME IS "<< Teanames<<"\n";
            cout<<"YOUR WILL BE SERVED: "<<servings<<"\n";
             cout<< "YOUR INGRIDENT ARE \n "<<endl;
            for(string ingrident:ingridents){
                cout << ingrident <<"\n";
            
            }
        };
        friend void iamyourfriend(Chai &obj,string name,int serve,vector<string> ingr );
       

        
};

void iamyourfriend(Chai &obj,string name,int serve,vector<string> ingr ){
    obj.Teanames=name;
    obj.servings=serve;
    obj.ingridents=ingr;
}


int main(){

    Chai chai;

    iamyourfriend(chai,"MASAL CHAI",6,{"MILK","WATER","MASALA"});
    

    chai.getdisplay();


    return 0;
}