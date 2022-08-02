#include<iostream>
using namespace std;

// DEFAULT PARAMETERS
void myFun(string country ="Sweden"){
    cout<<country<<endl;
}

//MULTIPLE PARAMETERS
void myFun1(string fname, int age){
    cout<<fname<<" is "<<age<<" years old."<<endl;
}

//Return values
int myFunction(int x){
    return 5+x;
}

int main(){
    myFun(); // no value given here
    myFun("India");
    myFun("USA");

    myFun1("Yash", 20);
    myFun1("Chhaya", 47);

    cout<<myFunction(5)<<endl;
    cout<<myFunction(2)<<endl;

    return 0;
}