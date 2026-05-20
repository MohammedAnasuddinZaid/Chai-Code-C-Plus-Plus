/*ASSIGNMENT OPERATION*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int Number_tea_bags;

    cout << "How many tea bags u have? ";
    cin>>Number_tea_bags;

    if (Number_tea_bags<10){
        Number_tea_bags += 5;
        cout << "YOUR TEA BAGS ARE " << Number_tea_bags;
    }
    else{
        cout << Number_tea_bags;
    }
    return 0;
}