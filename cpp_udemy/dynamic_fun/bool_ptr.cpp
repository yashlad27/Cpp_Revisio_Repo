#include<iostream>
using namespace std;

int main(){

    bool* my_bool_ptr = new bool;
    *my_bool_ptr = true;

    cout<<boolalpha<<*my_bool_ptr<<endl;
    // boolalpha format flag: prints True or False instead of 1 or 0
    
    delete my_bool_ptr;
    my_bool_ptr = nullptr;
    return 0;
}