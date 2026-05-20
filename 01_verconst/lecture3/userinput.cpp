#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaquantity;

    cout << "what u want to order in tea? \n";
    getline(cin,userTea);

    cout << "how many \a" << userTea << "would u like to have?";
    cin >> teaquantity;

    cout << teaquantity << userTea;
    
}