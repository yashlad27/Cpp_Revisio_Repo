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

    cout<<sizeof(myNum)/sizeof(int)<<"\n";

    // MULTI DIMENSIONAL ARRAYS:
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cout<<letters[i][j]<<endl;
        }
    }
    
    return 0;
}