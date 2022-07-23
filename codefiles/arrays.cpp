#include<iostream>
using namespace std;

int main(){
    // size of an array:

    int myNum[5] = {10, 20, 30, 40, 50};
    cout<<sizeof(myNum)<<endl;
    // this returns size of myNum equal to 20
    // size of int is 4 bytes 
    // therefore to find number of elements in the array
    // we divide our size of array by sizeof(int)

    cout<<sizeof(myNum)/sizeof(int);
    return 0;
}