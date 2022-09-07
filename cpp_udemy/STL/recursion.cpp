#include<iostream>
using namespace std;

// Recursion: 

void countdownfrom(int num){
    if(num>=0){
        cout<<num<<endl;
        countdownfrom(num-1); 
        // this is a frame and is called a call stack
        // if repeated many times then stack overflow happens
    }
}

int sumValues(int num){
    if(num>=1){
        return num + sumValues(num-1);
    }
}

int main(){
    countdownfrom(10); // function call
    int totalsum = sumValues(10);
    cout<<"The sum is:" << totalsum << endl;
    return 0;
}