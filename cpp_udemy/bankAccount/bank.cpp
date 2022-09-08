#include "bank.h"
#include<iostream>
#include<string>
using namespace std;

// bank::bank(){
//     this->balance=0;
// }

bank::bank(string owner){
    this->owner = owner;
    this->balance = 0;
}

bank::bank(string owner, int balance){
    this->owner = owner;
    this->balance = balance;

    if(balance<=0){
        cout<<"Invalid Value."<<endl;
    }else{
        this->balance = balance;
        // cout<<"Current Balance is: "<<balance<<endl;
    }
}

void bank::depositAmt(int amount){
    //this->salary = salary;
    //this->amount = amount;
    // if(amount<=0){
    //     cout<<"Invalid Value."<<endl;
    // }else{
    //     cout<<"New Balance is: "<<getBalance()+amount<<endl;
    // }

    // other approach:
    if(amount>0){
        balance += amount;
    }else{
        cout<<"Amount deposit must be greater than zero!"<<endl;
    }
}

void bank::withdrawAmt(int amount){
    //this->salary = salary;
    if(amount>0 && amount<=balance){
        balance -= amount;
    }else{
        cout<<"The amount withdraw is invalid!"<<endl;
    }
}

string bank::getOwner() const {
    return owner;
}

int bank::getBalance() const {
    return balance;
}