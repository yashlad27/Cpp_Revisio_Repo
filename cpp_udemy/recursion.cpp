#include<iostream>
using namespace std;

void countdownfrom(int num){
    if(num>=0){
        cout<<num<<endl;
        countdownfrom(num-1);
    }
}

int main(){
    countdownfrom(10);
    return 0;
}