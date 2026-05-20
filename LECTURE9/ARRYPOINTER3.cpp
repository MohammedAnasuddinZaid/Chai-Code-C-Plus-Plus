#include <iostream>

using namespace std;


int* preapringchaiorders(int cups){ 
    
    int* orders= new int[cups];
    for(int i=0;i<cups;i++){
        orders[i]= (i+1) * 10;
    }
    return orders;
}


int main(){


    int cups = 5;
    int* chaiorder= preapringchaiorders(cups);

    for(int i=0;i<cups;i++){
        cout<< chaiorder[i]<<" ";
    }

    delete[] chaiorder;

    

    return 0;
}

/* WHY A POINTER (*) IS NEEDED TO STORE THE NEW!!
STACK                               HEAP (Dynamic)
┌─────────────────┐                       ┌─────────────────┐
│ orders (Pointer)│ ──[holds address]──>  │  10 | 20 | 30   │ (No Name!)
│  = 0x7ffee3     │                       │  40 | 50        │
└─────────────────┘                       └─────────────────┘
*/