#include<iostream>
using namespace std;

// PASS by Reference:
void swapnUM(int &x, int &y){
    int z = x;
    x = y; 
    y = z;
}

void myFunction(int myNum[5]){
    for(int i=0; i<5; i++){
        cout<<myNum[i]<<endl;
    }
}

int main(){
    int firstnum = 20;
    int secondnum = 10;

    cout<<"Before swap: "<<endl;
    cout<<firstnum<<" "<<secondnum<<"\n";

    swapnUM(firstnum, secondnum);

    cout<<"After swap: "<<endl;
    cout<<firstnum<<" "<<secondnum<<"\n"; 

    int myNum[5]={10,20,30,40,50};
    myFunction(myNum);
    return 0;
}