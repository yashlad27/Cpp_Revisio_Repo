#include<iostream>
using namespace std;

int multiply(int x, int y, int z){
    if(x>0 && y>0 && z>0){
        return x*y*z;
    }else{
        return 1;
    }
}

int main(){
    int product = multiply(1, 2, 3);
    cout<<"Product of 1, 2 and 3 is: "<<product<<endl;
    return 0;
}