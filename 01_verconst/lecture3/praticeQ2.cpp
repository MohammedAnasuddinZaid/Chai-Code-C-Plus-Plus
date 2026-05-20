#include <iostream>
#include <string>

using namespace std;

int main(){
    float tea;

    cout<< "WHAT DO U WANT UR TEA PRICE TO BE??";
    cin >> tea;

    float increase= tea*(10/100);
    int tea_with_GST= (int) increase;

    cout << "YOUR TEA PRICE IS \a" <<tea_with_GST<< endl;

     
}