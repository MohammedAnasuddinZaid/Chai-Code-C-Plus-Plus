#include <iostream>
#include <string>

using namespace std;

int main(){
    string Teatype;
    int TeaQuantity;

    cout << "WHich tea would you like to have ";
    getline(cin,Teatype);

    cout << "HOW MANY CUPS DO U WANT ";
    cin >> TeaQuantity;

    cout<< "YOUR FAV TEA IS " << Teatype << "THE NUMBER OF TIMES U WANT THIS IS "<< TeaQuantity << endl;
    return 0;
}