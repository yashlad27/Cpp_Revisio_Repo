#include<iostream>
#include<string>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void runGame();
void initialiseGameBoard(string gameBoard[ROWS][COLS]);
void printCurrentBoard(string gameBoard[ROWS][COLS]);
void getUserInput(bool xturn, string gameBoard[ROWS][COLS]);
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS]);
bool isBoardFull(string gameBoard[ROWS][COLS]);

int main(){
    // TIC - TAC - TOE
    runGame();

    return 0;
}

void runGame(){
    
}

void initialiseGameBoard(string gameBoard[ROWS][COLS]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            gameBoard[i][j] = " ";
        }
        cout<<endl;
    }
}

void printCurrentBoard(string gameBoard[ROWS][COLS]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            cout<<gameBoard[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isBoardFull(string gameBoard[ROWS][COLS]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            if(gameBoard[i][j]!=" "){
                return true;
            }
        }
        cout<<endl;
    }
}

bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            if(gameBoard[row][col]!=" "){
                return true;
                cout<<row<<" "<<col;
            }else{
                return false;
                cout<<"Cell is already occupied!";
            }
        }
        cout<<endl;
    }
}