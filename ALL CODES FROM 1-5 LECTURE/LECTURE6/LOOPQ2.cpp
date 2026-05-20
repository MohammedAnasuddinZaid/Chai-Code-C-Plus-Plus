#include <iostream>
#include<string>

using namespace std;

int main(){
    string response;

    do{
        cout<<"DO U NEEED MORE TEA (YES or NO) ";
        getline(cin,response);
    }while (response != "NO" && response != "no");

}