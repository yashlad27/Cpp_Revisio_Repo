#include<iostream>
using namespace std;

/*
    | 0 | 1 | 2 | 3
---------------------
0   |0,0|0,1|0,2|0,3
--------------------- 
1   |1,0|1,1|1,2|1,3      
---------------------
2   |2,0|2,1|2,2|2,3   
---------------------
3   |3,0|3,1|3,2|3,3   

*/

// print function: defining number of cols in necessary!!!
void print(int arr[][100], int n, int m){

    for(int i=0; i<n; i++){
        for(int j=0; i<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
}

int main(){

    int arr[100][100];
    // n row and m cols
    int n, m;
    cout<<"Enter number of rows 'n' & number of cols 'm' "<<endl;
    cin>>n>>m;

    for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){

            // iterate row by row
            cin>>arr[i][j];
        }
    }

    print(arr, n, m); // arr is passed by reference not copied again
}