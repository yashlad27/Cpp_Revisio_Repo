#include<iostream>
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
    return 0;
}