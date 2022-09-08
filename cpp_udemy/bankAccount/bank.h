#ifndef BANK_H
#define BANK_H
#include<string>
using namespace std;

class bank{
    public:
        bank();
        bank(string owner);
        bank(string owner, int balance);
        void depositAmt(int amount);
        void withdrawAmt(int amount);
        string getOwner() const;
        int getBalance() const;

    private:
        string owner;
        int balance;
        int amount;
};

#endif