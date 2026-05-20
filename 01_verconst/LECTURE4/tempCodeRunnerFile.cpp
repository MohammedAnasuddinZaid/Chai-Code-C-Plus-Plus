/*RELATIONAL OPERATORS*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    bool student;
    int bags_above_15;
    bool discound;

    cout<< "ARE YOU ARE STUDENT? ";
    cin >> student;

    cout<< "HOW MANY BAGS U WANT? ";
    cin >> bags_above_15;

    if(student=true || bags_above_15>15){
        discound=true;
        cout<<"U GOT THE DISCOUNT";
    }
    else{
        discound=false;
        cout<<"SORRY GOT IT WRONG NO DISCOUNT";
    }

}