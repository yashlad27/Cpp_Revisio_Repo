#include<iostream>
using namespace std;

// DEFAULT PARAMETERS
void myFun(string country ="Sweden"){
    cout<<country<<endl;
}

int main(){
    myFun();
    myFun("India");
    myFun("USA");

    return 0;
}