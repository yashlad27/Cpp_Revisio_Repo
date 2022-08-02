#include<iostream>
using namespace std;

// PASS by Reference:

void swapnUM(int &x, int &y){
    int z = x;
    x = y; 
    y = z;
}

int main(){
    int firstnum = 20;
    int secondnum = 10;

    cout<<"Before swap: "<<endl;
    cout<<firstnum<<" "<<secondnum<<"\n";

    swapnUM(firstnum, secondnum);

    cout<<"After swap: "<<endl;
    cout<<firstnum<<" "<<secondnum<<"\n"; 
    return 0;
}