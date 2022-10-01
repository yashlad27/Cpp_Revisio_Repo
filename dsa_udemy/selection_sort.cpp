#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n){
    for(int pos=0; pos<=n-2; pos++){
        int current = a[pos];
        int min_pos = pos;

        for(int j=pos; j<n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }

        swap(a[min_pos], a[pos]);
    }
}

int main(){

    int arr[] = {-2, 3, 4, -9, 5, 1, 11, 6, 8, -7};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr, n);

    // for(auto x : arr){
    //     cout<<x<<",";
    // }

    for(int i=0; i<=n; i++){
        cout<<i<<",";
    }

    return 0;
}