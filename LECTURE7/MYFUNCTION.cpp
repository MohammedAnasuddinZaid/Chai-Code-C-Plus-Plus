// returntype functionname(parameters){
//     // function body
// }
//void
#include <iostream>

using namespace std;

int checkteamperatue(int teamperature){
    return teamperature;
}

//decleration of function
void serveChai(int cups);

void serveChai(string Teatype= "masala chai"){
    cout<<"YOUR TEA IS "<<Teatype;
}

int main(){

    int temp= checkteamperatue(58);

    cout<<temp<<"\n\n";

    serveChai(100);

    serveChai("GREEN TEA");


    return 0;

}

//defination of function
void serveChai(int cups){
    cout<<"TEA CUPS ARE "<<cups<<"\n";
}

