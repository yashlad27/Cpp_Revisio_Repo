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

//-------------------------------------//
//------|Initialise Game Board|-------//
//-------------------------------------//
void initialiseGameBoard(string gameBoard[ROWS][COLS]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            gameBoard[i][j] = " "; // empty space
        }
        cout<<endl;
    }
}

//-------------------------------------//
//-------|Print current Board|---------//
//-------------------------------------//
void printCurrentBoard(string gameBoard[ROWS][COLS]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            cout<<gameBoard[i][j];
            if(j<2){
                cout<<"|";
            }
        }
        cout<<endl;
        if(i<2){
            cout<<"- - - - -"<<endl;
        }
    }
    cout<<endl; // extra spacing
}

//-------------------------------------//
//------|is Board Full?|-------//
//-------------------------------------//
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

//-------------------------------------//
//------|cells already occupied|-------//
//-------------------------------------//
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