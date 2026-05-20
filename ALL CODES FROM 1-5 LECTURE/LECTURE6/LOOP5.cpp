#include <iostream>
#include <string>
using namespace std;

int main(){

    string allteas[3]={"ORANGE TEA","GREEN TEA","APNE CHAI BHAI"};

    for(int i= 0; i<3 ;i++){

        if(allteas[i]=="GREEN TEA"){
            cout<<"SKIPING GREEN TEA ..."<<allteas[i] <<"\n\n";
            continue;
        }

        cout<<"YOUR TEA IS BEING MADE RUK JA BHAI; "<<"YOUR TEA IS "<< allteas[i] <<"\n\n";
    };
    
    


    

    return 0;
}