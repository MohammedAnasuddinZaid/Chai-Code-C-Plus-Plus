#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double initlbalance){
            accountNumber=accNum;
            balance=initlbalance;
        }
        //geter
        double getbalance() const {
            return balance;
        }

        //methode to deposte money
        void deposit(double amount){
            if(amount>0){
                balance += amount;
                cout<< "deposited: "<< amount<< "NOW UR BALANCE IS "<<balance;
            }else if(amount<0){
                cout<< "WRONG ENTRY "<<endl;
            }
        }

        void withdraw(double amount) {
            if(amount > 0 && amount<= balance){
                balance -= amount;
                cout << "Withdrew: " << amount << ". Now your balance is: " << balance << endl;
            }else{
                cout<<"INVALID WITHDRAWN AMOUNT ";
            }
        }


};

int main(){

    BankAccount myaccount("123456",1000);
    myaccount.deposit(2000);
    myaccount.withdraw(1000);

    return 0;
}