#include<iostream>
using namespace std;

int main(){
    // C++ Dereference:
    string food = "Pizza";
    string* ptr = &food;

    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";

    // When used in declaration (string *ptr), it creates a pointer variable
    // when not used in declaration, it acts as a dereference operator

    cout<<food<<"\n";
    cout<<&food<<endl;
    cout<<*ptr<<endl;
    
    *ptr = "Hamburger";
    cout<<*ptr<<endl;
    cout<<food<<"\n";
    return 0;
}