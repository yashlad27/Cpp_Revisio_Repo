#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n){
    for(int i=1; i<=n-1; i++){
        
        int curr = a[i];
        int prev = i-1;

        while(prev>=0 and a[prev]>curr){
            
            a[prev+1] = a[prev];
            prev = prev - 1;

        }

        a[prev+1] = curr;
    }
}

int main(){
    int arr[] = {-2, 3, 4, -9, 5, 1, 11, 6, 8, -7};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr, n);

    // for(auto x : arr){
    //     cout<<x<<",";
    // }

    for(int i=0; i<=n; i++){
        cout<<i<<",";
    }

    return 0;
}