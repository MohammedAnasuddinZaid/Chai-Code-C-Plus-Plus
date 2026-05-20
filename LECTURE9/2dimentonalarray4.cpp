#include <iostream>

using namespace std;


int main(){

    int ChaiSales[3][7]={
        {50,60,20,30,40,50,60},
        {12,12,44,56,81,70,12},
        {12,43,56,58,49,28,34}
    };

    for (int i=0; i<3; i++){
        cout<<" I AM AT SHOP: "<< i+1<<"\n";
        for(int j =0; j<7;j++){
            cout<< ChaiSales[i][j]<< " CUPS \n"; 
        }
    }

    return 0;
}