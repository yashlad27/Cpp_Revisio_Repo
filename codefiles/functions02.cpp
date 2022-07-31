#include<iostream>
using namespace std;

void myFunction(string country = "norway"){
    cout<<country<<endl;
}

void myFunc1(string fname, int age){
    cout<<fname<<"\n";
    cout<<age<<"years old"<<endl;
}

int main(){
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");

    myFunc1("YASH", 21);
    myFunc1("Yash", 22);
    
    return 0;
}