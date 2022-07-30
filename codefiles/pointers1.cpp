#include<iostream>
using namespace std;

int main(){
    string food;
    getline(cin, food);

    cout<<food<<"\n"<<&food<<endl;

    // Pointer -> variable that stores memory address as its value
    // created with *-> operator

    string food1 = "Pizza";
    string* ptr = &food1;

    cout<<food1<<endl;
    cout<<&food1<<endl; // both do same thing and output memory address of food1
    cout<<ptr<<endl;
    return 0;
}