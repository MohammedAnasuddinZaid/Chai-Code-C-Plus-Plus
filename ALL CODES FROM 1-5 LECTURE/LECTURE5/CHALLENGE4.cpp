#include <iostream>
#include <string>

using namespace std;

int main(){
    int choise;
    int price;
    cout<<"WHAT DO U WANT TO HAVE \n";
    cout<<"1. GREEN TEA \n";
    cout<<"2. BLACK TEA \n";
    cout<<"3. OOLONG TEA \n";
    cin>>choise;

    switch(choise){
        case 1:
            price=2.0;
            cout << "YOUR PRICE IS" << price ;
            break;
        case 2:
            price= 1.0;
            cout << "YOUR PRICE IS"<< price ;
            break;
        case 3:
            price=0.0;
            cout <<"YOUR PRICE IS"<< price ;
            break;
        default:
            cout <<  "INVALID OPTION" ;
            break;
    }


}