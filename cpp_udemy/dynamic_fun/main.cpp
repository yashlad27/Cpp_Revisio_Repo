#include<iostream>
using namespace std;

int main(){

    int* my_ptr = new int(123); // dynamically allocating memory
    // *my_ptr = 123;

    cout<<*my_ptr<<endl;
    delete my_ptr; // so that less memory is consumed!
    my_ptr = nullptr; // no dangling pointer!

    return 0;
}