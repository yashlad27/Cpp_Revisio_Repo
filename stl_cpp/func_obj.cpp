#include<iostream>
using namespace std;

int main()
{
    // Function objects(FUNCTOR): function wrapped in a class so that it is available like an object
    int arr[] = {18888,22,3,4222,51,6,7};
    sort(arr, arr+6);
    cout<<"Sorting in Ascending: ";
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr+6, greater<int>());
    cout<<"Sorting in Descending: ";
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}