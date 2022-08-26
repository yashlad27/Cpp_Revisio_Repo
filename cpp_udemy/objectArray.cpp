#include<iostream>
#include<array>
using namespace std;

int sumArray(array<int , 10> myArray);

int main(){

    array<int, 10> PrimaryArray = {2,4,6,8,10,12,14,16,18,20};

    int res = sumArray(PrimaryArray);

    cout<<"The result is: "<<res<<endl;
    return 0;
}

int sumArray(array<int , 10> myArray){
    int sum=0;

       for(int item : myArray){
        sum += item;
       } 
    return sum;
}