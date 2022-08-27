#include<iostream>
#include<array>
using namespace std;

int sumArray(array<int, 10> myArray);
int sumArray(array<int, 10> myArray, int& thesum);
int main(){

    array<int, 10> PrimaryArray = {2,4,6,8,10,12,14,16,18,20};

    int res = sumArray(PrimaryArray);
    int result_byref;

    sumArray(PrimaryArray, result_byref);

    cout<<"The result is: "<<res<<endl;

    cout<<"The result by ref is: "<<result_byref<<endl;
    return 0;
}

// return sum of array of array objects elements:
int sumArray(array<int, 10> myArray){
    int sum=0;

       for(int item : myArray){
        sum += item;
       } 
    return sum;
}

// sum of array object elements by reference:
int sumArray(array<int, 10> myArray, int& thesum){
    thesum = 0;

    for(int item:myArray){
        thesum+=item;
    }
    return thesum;
}