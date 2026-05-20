#include <iostream>
#include <string>

using namespace std;

int main(){
    int cups;
    double pricepercup, totalprice, discountedprice;

    cout << "Enter the number of tea cups: ";
    cin >> cups;
    cout << "Enter the price per cup: ";
    cin >> pricepercup;

    totalprice= cups*pricepercup;

    if (totalprice > 100){
        discountedprice = totalprice - (totalprice * 0.05);
        cout << "discountedprice is "<< discountedprice;
    }
    else{
        cout << "totalprice is " << totalprice;
    }        

    return 0;
}