#include<iostream>
using namespace std;

int sumArray(int arr[], int size);

int main(){
    int arr[]={1, 2, 4, 11, 12, 14};
    int size = sizeof(arr)/sizeof(int);
    int sum = sumArray(arr, size);

    cout<<"Sum of Elements in Array: "<<sum<<endl;
    return 0;
}

int sumArray(int arr[], int size){
    //int size = sizeof(arr)/sizeof(int);
    int sum=0;
    for(int i=0; i<size; i++){
        // arr[i] += arr[i];
        sum += arr[i]; 
        // sum = sum + arr[i];
    }
    return sum;
}