#include<iostream>
using namespace std;

void display(int arr[], int n){
    // Traversal:
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sortedInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        cout<<"Insertion was not possible!"<<endl;
        return -1;
    }else {
        cout<<"Insertion was possible!"<<endl;
    }
    for(int i=size-1; i >= index; i--){
        arr[i+1] = arr[i];
    }

    arr[index] = element;
    return 1;
}

int main(){
    // INSERTION operation in arrays:
    int arr[] = {1, 2, 55, 70, 2, 4, 8, 22};
    int size=sizeof(arr)/sizeof(int);
    display(arr, size);

    int element=45; // element to be inserted
    int index = 3;
    // int capacity = 100;
    //size += 1;
    sortedInsertion(arr, size, element, 100, index);

    cout<<endl;
        
    display(arr, size);
    return 0;
}