#include <iostream>
#include <string>

using namespace std;

int main(){

    int teaorder;
    
    cout<< "HOW MANY CUPS U WANT TO SERVE? ";
    cin >> teaorder;

    while (teaorder>0){
        teaorder -= 1;
        cout<<"THE TEA IS BEING SERVED \n "<< "REAMINING " << teaorder << "\n\n"  ;
    }
    cout<<"THE TEA FOR TODAY HAS FINISHED";
    
    return 0;
}