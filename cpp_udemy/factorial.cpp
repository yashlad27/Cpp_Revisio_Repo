#include<iostream>
using namespace std;

int factorialFun(int num){
    if(num>1){
        return num*factorialFun(num-1);
    }else{
        return 1;
    }
    //return num;
}

int main(){

    int fact = 6;
    cout<<"Factorial of "<<fact<<" is:"<<factorialFun(fact)<<endl;
    return 0;
}