#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int serving;

    public:
        Chai(string name,int serve): teaName(name),serving(serve){}

        void display() const {
            cout << "teaname: "<< teaName <<endl;
        }

    
    friend bool compareServing(const Chai &chai1, const Chai &chai2);


};

bool compareServing(const Chai &chai1, const Chai &chai2){
    return chai1.serving > chai2.serving;
}

int main(){
    Chai masalachai("MASALA CHAI",4);
    Chai GINGERachai("GINGER TEA",8);

    if(compareServing(masalachai,GINGERachai)){
        cout<< " MASALA CHAI HAS MORE SERVING "<<endl;
    }else{
        cout<< " MASALA CHAI HAS MORE SERVING "<<endl;
    }


    masalachai.display();
    GINGERachai.display();
}


