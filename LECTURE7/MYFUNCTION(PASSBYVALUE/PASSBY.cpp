#include <iostream>

using namespace std;

void serveChai(int cups){
    cups += 5;
    cout<<" POURED CUPS "<<cups<<endl;
}

int main(){

    int chaicups =2;
    serveChai(chaicups);


    cout<<"TOTAL CUPS ARE "<<chaicups<<endl;

    return 0;

}
