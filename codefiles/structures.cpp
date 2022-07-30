#include<iostream>
using namespace std;

struct {
    int myNum;
    string myString;
} myStructure;

struct{
    string stud_name;
    int stud_id;
    int stud_roll;
}mystruct1, mystruct2, mystruct3;

int main(){
    //access structure members:
    myStructure.myNum =10;
    myStructure.myString="Hello";

    cout<<myStructure.myNum<<endl;
    cout<<myStructure.myString<<endl;

    return 0;
}