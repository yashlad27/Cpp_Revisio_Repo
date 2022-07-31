#include<iostream>
using namespace std;

void myFunction(string country = "norway"){
    cout<<country<<endl;
}

int main(){
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");
    return 0;
}