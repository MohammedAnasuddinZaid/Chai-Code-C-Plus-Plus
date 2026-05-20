/*SOME ERROR WITH GETLIN I AM NOT ABLE TO CHANGE TO "CIN>>" */


#include <iostream>
#include <string>

using namespace std;

int main(){
    string DO_u_want_greentea;

    cout << "do u want tea U WANT? ";
    getline(cin,DO_u_want_greentea);

    if (DO_u_want_greentea == "GREEN TEA"){
        cout<<"HERE IS UR GREEN TEA :) ";
    }
    else{
        cout << "SORRY NO GREEN TEA FOR U :( ";
    }



    return 0;
}