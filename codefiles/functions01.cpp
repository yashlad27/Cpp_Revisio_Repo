#include<iostream>
using namespace std;

// void myFunction(){
//     cout<<"myFunction executed!"<<endl;
// }

void myFunction();   // function declaration 
void myStringFun(string fname);
// void funcName(parameter1, parameter2, parameter3){

// }

int main(){
    myFunction();

    myStringFun("yash");
    myStringFun("yash");
    return 0;
}

void myFunction() {
    cout<<"myFunction executed!"<<endl;
}

void myStringFun(string fname){
    cout<<fname<<"\n";
}