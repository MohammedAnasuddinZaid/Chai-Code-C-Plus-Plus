//getter is used so that i can print my bankaccount balance and all but it wont change the balance for sure even if i try to do it it wont but if i dont use getter and directley use the balance which is private for now but if i keep it public and use it then anyone can change there account balance to anything evene trillions so thats why a getter is used to read it but not rewrite/change it. getter is used for saftey and getter in const is also very important as const does not allow user to change value 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount{
    private:
        string account;
        int balance;
        vector <string> ingridents;
    public:
        BankAccount(string name,int  initialballance){
            account = name;
            balance = initialballance;
        };
        int getbalance() const{
            return balance;
        }
        void deposit(int depost){
            if(depost>0){
                balance += depost;
                cout<<"YOUR AMOUNT DEPOSTED IS \n"<<depost<<"\n"<< "your balance is"<<balance << "\n";
            }else if(depost<0){
                cout<<"INVALID ENTRY ";
            }
        }
        void withdraw(int withdraws){
            if(withdraws>0 && withdraws<= balance){
                balance -=withdraws;
                cout<<"YOU WITHDRAWED "<< withdraws<<"\n"<< "your balance is"<<balance<<"\n";
            }
        }
};

int main(){

    BankAccount myaccount("123",10000);
    myaccount.deposit(1000);

    myaccount.getbalance();

    return 0;
}