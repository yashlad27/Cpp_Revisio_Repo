#include<iostream>
#include<array>
using namespace std;

int main(){
    // Operations on arrays:
    // 1. Traversal 
    // 2. Insertion
    // 3. Deletion
    // 4. Searching

    int arr[] = {1,2,3,4};
    for(int i=0; i < 4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // or
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // Taking input and displaying it on console:
    int arr1[5];
    for(int i=0; i<5; i++){
        cout<<"Enter element "<< i << " in array: ";
        cin>>arr1[i];
        cout<<endl;
    }

    int size1 = sizeof(arr1)/sizeof(int);

    for(int i=0; i<=size; i++){
        cout<<arr1[i]<<" ";
    }

    return 0;
}