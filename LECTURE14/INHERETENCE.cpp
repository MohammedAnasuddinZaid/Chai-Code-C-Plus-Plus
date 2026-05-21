#include <iostream>
#include <string>
#include <vector>

using namespace std;


//base class
class Tea{
    protected:
        string teaName;
        int servings;
    public:
        Tea(string name,int serves):teaName(name), servings(serves){
            cout<< "TEA CONSTRUCTORE CALLED "<< teaName << endl;
        }

        virtual void brew() const{
            cout<< "BREWING "<< teaName << " WITH GENRIC METHOD"<< endl;
        }
        virtual void serve() const{
            cout<< "serving "<< servings << " CUP OF TEA WITH GENRIC METHOD"<< endl;
        }
        virtual ~Tea(){
            cout<<"DECTROCTER CALLED FOR"<<teaName<<endl;
        }
};

class Greetea: public Tea{

    public:
        Greetea(int serve) : Tea("GREENTEA", serve){
            cout<<"GREEN TEA CONSTRUCTOR CALLED";
        };
        void brew() const override{
            cout << "BREWING"<< teaName << "WITH GREEN LEAVES"<<endl;
        }
        void serve() const override{
            cout<< "SERVING "<< servings<<endl;
        }

        ~Greetea(){
            cout<<"DISTRUCTOR CALLED FOR GREETEA"<<endl;
        }
};


class Masalachai : public Tea{
public:
    Masalachai(int serve): Tea("MASALA CHAI",serve){
        cout<<"MASALACHAI CALLED"<<endl;
    }
    void brew() const override final{ 
    cout << "BREWING"<< teaName << "WITH GREEN LEAVES"<<endl;
    }
    void serve() const override{
    cout<< "SERVING "<< servings<<endl;
    }

    ~Masalachai(){
        cout << "MASALA CHAI DISTRUCTOR CALLED";
    }


};

// class SpicalyMasalaTea: public Masalachai{

// public:
//     void brew() const override {
//         cout<< "HI" <<endl;
//     };
    
// };




int main(){

    Tea* tea1 =  new Greetea(2);
    Tea* tea2= new Masalachai(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}