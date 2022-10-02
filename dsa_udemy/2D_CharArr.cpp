#include<iostream>
using namespace std;

int main(){

    // initialisation
    char numbers[][10] = {
        "One",
        "two",
        "three",
        "forty",
        "eight",
        "Hundred"
    };

    // Printing individual string:
    int i=3;
    cout<<numbers[i]<<endl;

    // Printing entire char array:
    for(int i=0; i<6; i++){
        cout<<numbers[i]<<endl;
    }

    return 0;
}