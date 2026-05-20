/*MY WAY OF THINKING*/

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){

//     string teawhatwant;


//     do{
//     cout<<"DO U WANT MORE TEA (YES or NO) ";
//     cin>>teawhatwant;
//     }while(
//     teawhatwant!="no" && teawhatwant!="NO"
//     );

//     return 0;
// }

/*THE CODE WAY OF SAYING (ALSO SHORT)*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string input;

    while(true){
        cout<<"DO U WANT MORE TEA IF NO THEN SAY 'STOP' ";
        cin>>input;

        if(input=="STOP" || input=="stop"){
            
            cout<<"THANKS FOR ORDERING PLEASE COME AGAIN";
            break;
        }

        cout<<"HERE IS YOUR ORDER  :) \n\n ";
    }
    

    return 0;
}