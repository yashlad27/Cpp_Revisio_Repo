#include<iostream>
using namespace std;

// DEFAULT PARAMETERS
void myFun(string country ="Sweden"){
    cout<<country<<endl;
}

void myFun1(string fname, int age){
    cout<<fname<<" is "<<age<<" years old."<<endl;
}
int main(){
    myFun(); // no value given here
    myFun("India");
    myFun("USA");

    myFun1("Yash", 20);
    myFun1("Chhaya", 47);

    return 0;
}