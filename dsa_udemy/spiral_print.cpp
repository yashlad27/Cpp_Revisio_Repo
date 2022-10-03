#include<iostream>
using namespace std;

void sprial_print(int arr[][10], int n, int m){

    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = m-1;

    while(startCol<=endCol and startRow<=endRow){
        // Start row
        for(int col = startCol; col<=endCol; col++){
            cout<<arr[startRow][col]<<" ";
        }

        // End col
        for(int row = startRow + 1; row<=endRow; row++){
                cout<<arr[row][endCol]<<" ";
        }

        // End row
        for(int col = endCol-1; col>=startCol; col--){

            if(startRow == endRow){
                break;
            }

            cout<<arr[endRow][col]<<" ";
        }

        // Start col
        for(int row = endRow-1; row>=startRow+1; row--){

            // avoid duplicate printing
            if(startCol == endCol){
                break;
            }

            cout<<arr[row][startCol]<<" ";
        }
    
    startRow++;
    endRow++;
    startCol++;
    endCol++;
    }

}

int main(){
    // int spiral[100][100];
    // int n,m; // n,m=4
    // cin>>n>>m;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cin>>spiral[i][j];
    //     }
    // }
    int arr[][10] = {  {1, 2, 3, 4},
                       {12, 13, 14, 5},
                       {11, 16, 15, 6},
                       {10, 9, 8, 7}};
    int n=4, m=4;
    sprial_print(arr, 4, 4);
    return 0;   
}