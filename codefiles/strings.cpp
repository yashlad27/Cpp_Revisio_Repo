#include<iostream>
#include<string>
using namespace std;

int main(){
    string fname, lname;
    cout<<"Enter first name: "<<endl;
    getline(cin, fname);
    cout<<"Enter last name: "<<endl;
    getline(cin, lname);
    
    string fullname = fname.append(lname);
    cout<<fullname;
    return 0;
}