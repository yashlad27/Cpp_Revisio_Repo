#include<iostream>
using namespace std;

int main(){

    int ARR_SIZE;
    cout<<"Enter size of array: "<<endl;
    cin>>ARR_SIZE;
    cout<<endl;

    int* yashArray = new int[ARR_SIZE];
    for(int i=0; i<ARR_SIZE; i++){
        yashArray[i] = i*2;
    }

    for(int i=0; i<ARR_SIZE; i++){
        cout<<yashArray[i]<<endl;
    }

    delete[] yashArray; // square brackets required

    return 0;
}