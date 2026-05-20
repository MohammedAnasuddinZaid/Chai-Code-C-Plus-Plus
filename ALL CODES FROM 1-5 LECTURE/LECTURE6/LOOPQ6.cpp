#include <iostream>
#include <string>
using namespace std;

int main(){

    string teatyples[3]={"olang tea","CHAI","COFFIE"};
    
    for(int i=0; i<3 ;i++){
        cout<<"YOUR TEA CUPS ARE BRING MADE \n"<<teatyples[i]<< "\n\n";
        for(int j=1;j<=3;j++){
            cout<<"THE TEA NUMBER BEING MADE IS "<< j <<"OF THE TEA "<<teatyples[i] <<"\n";
        }
    }
    
    return 0;
}