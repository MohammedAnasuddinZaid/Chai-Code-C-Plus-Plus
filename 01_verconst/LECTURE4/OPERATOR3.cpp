
/*RELATIONAL OPERATORS (AND(&&))*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    bool student;
    int bags_above_15;
    bool discound;

    cout<< "ARE YOU ARE STUDENT(1 for yes and 0 for NO)? ";
    cin >> student;

    cout<< "HOW MANY BAGS U WANT? ";
    cin >> bags_above_15;

    if(student==1 && bags_above_15>15){
        discound=true;
        cout<<"U GOT THE DISCOUNT";
    }
    else{
        discound=false;
        cout<<"SORRY GOT IT WRONG NO DISCOUNT";
    }

}