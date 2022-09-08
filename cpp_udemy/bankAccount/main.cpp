#include<iostream>
#include "bank.h"
#include<string>
using namespace std;

int main(){
    bank account2("Bob");
    bank account1("Yash", 10000000);

    account2.depositAmt(100);
    cout<<"Bob's account has: "<<account2.getBalance()<<endl;

    account1.depositAmt(1234);
    cout<<"Yash's account has balance: "<<account1.getBalance()<<endl;
    account1.withdrawAmt(1000);
        cout<<"Yash's account has balance: "<<account1.getBalance()<<endl;
    //account1.getBalance();
    account1.getOwner();

    account1.getBalance();
    return 0;
}