#include<iostream>
using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();

int main()
{
    noConst();
    cout<<endl;

    cp2ncd();
    cout<<endl;

    ncp2cd();
    cout<<endl;

    cp2cd();
    cout<<endl;

    return 0;
}

// neither is a constant ( both can be changed )
void noConst(){
    cout<<"In noConst"<<endl;

    int* intPtr = new int(50);

    cout<<"\tOriginal Value: "<<*intPtr<<endl;

    *intPtr = 100;
    cout<<"\tChange Data"<<*intPtr<<endl;

    delete intPtr; // delete current dynamic int

    intPtr = new int(125);
    cout<<"\t new Integer entirely: "<< *intPtr << endl;

}

// pointer is constant (cannot be changed)
// data is not constant (can be changed!)
void cp2ncd(){
    cout<<"In cp2ncd: "<<endl;

    int* intPtr = new int(100);

    cout<<"\t orig value: "<<*intPtr<<endl;

    *intPtr = 250;
    cout<<"\tNew integer value:"<<*intPtr<<endl;

}

void ncp2cd(){

}

void cp2cd(){

}
