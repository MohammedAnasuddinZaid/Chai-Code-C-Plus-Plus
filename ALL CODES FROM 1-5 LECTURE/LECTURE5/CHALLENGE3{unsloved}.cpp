// UNSOLVED ****

#include <iostream>
#include <string>

using namespace std;

int main(){
    int how_many_cups;
    int totatprice,discount,finalprice;
    int priceperacket =1;

    cout<< "HOW MANY CUPS U WANT? ";
    cin>>how_many_cups;

    totatprice=how_many_cups*priceperacket; 

    if (how_many_cups>20){
        discount=0.20;
    }
        else if (how_many_cups>10 && how_many_cups<20){
        discount=0.1;
    }
        else if (how_many_cups<10){
        discount=0;
    }
    totatprice=totatprice- (totatprice*discount);
    cout<< "YOUR TOTAL PRICE IS "<< totatprice;


    return 0;
}