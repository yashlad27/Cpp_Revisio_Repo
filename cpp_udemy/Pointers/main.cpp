#include<iostream>
using namespace std;

int main(){

    int my_int = 140;
    int* ptr1 = &my_int; // gives address of my_int

    cout<<"my_int is originally: "<<my_int<<endl;

    cout<<"pointer holds value: "<<ptr1<<endl;

    *ptr1 = 200;
    cout<<"my_int is now: "<<my_int<<endl;
    cout<<endl;
    //double pointer challenge:
    double my_double = 3.14;
    double* double_ptr = &my_double;

    // indirection and deref:
    cout<<"my_double original contents: "<<my_double<<endl;

    cout<<"pointer holds the value: "<<double_ptr<<endl;

    return 0;
}