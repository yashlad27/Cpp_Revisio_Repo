#include<iostream>
using namespace std;

int main(){

    const int ARR_SIZE = 5;

    int* myArray = new int[ARR_SIZE]; // square brackets used instead of {}
    // new returns address of first element in array
    
    for(int i=0; i<ARR_SIZE; i++){
        myArray[i] = i*2;
        // no need of *
        // arrays are unique as they are automatically dereferenced!
    }

    for(int i=0; i<ARR_SIZE; i++){
        cout<<myArray[i]<<endl;
    }

    delete[] myArray;
    return 0;
}