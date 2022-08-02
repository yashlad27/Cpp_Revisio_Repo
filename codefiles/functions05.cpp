#include<iostream>
using namespace std;

int myFunction(int x);
float myFunction(float x);
double myFunction(double x, double y);

int plusFun(int x, int y){
    return x+y;
}

double plusFun(double x, double y){
    return x + y;
}

int main(){
    int myNum1 = plusFun(8, 5);
    double myNum2 = plusFun(8.5, 5.5);

    cout<<"Int: "<<myNum1<<endl;
    cout<<"Double: "<<myNum2<<endl;
    
    return 0;
}