#include<iostream>
#include<algorithm>
using namespace std;

bool compare_asc(int a, int b){
    return a<b;
}

bool compare_dec(int a, int b){
    return a>b;
}

int main(){
    int arr[]={10, 9, 8, 6, 5, 4, 3, 2, 11, 16, 7};
    int n = sizeof(arr)/sizeof(int);

    // reverse the array using a comparator
    // sort takes function as parameter also

    // here compare_dec and compare_asc are not function call but parameters to inbuilt func

    sort(arr, arr + n, compare_dec);
    // sort in descending using comparator:
    for(auto x: arr){
        cout<<x<<",";
    }
    cout<<endl;
    sort(arr, arr+n, compare_asc);
    // sort in ascending using comparator:
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    // we can reverse the arr using reverse()
    reverse(arr, arr+n);

    for(auto x: arr){
        cout<<x<<",";
    }
    cout<<endl;
    // inbuilt comparator:
    sort(arr, arr+n, greater<int>());
    // by default sorting in descending order
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}