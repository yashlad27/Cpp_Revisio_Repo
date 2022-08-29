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
    string winner = "";
    bool xturn = true; // start with X's Turn
    int theRow = 0;
    int theCol = 0;
    string gameBoard[ROWS][COLS];

    initialiseGameBoard(gameBoard);
    //inital print
    printCurrentBoard(gameBoard);

    while(winner==""){
        if(xturn){
            cout<<"It's X's Turn"<<endl;
        }
        else{
            cout<<"It's O's Turn"<<endl;
        }
        getUserInput(xturn, gameBoard);
        cout<<endl; // extra space
        printCurrentBoard(gameBoard); // reprint the board
        winner = getWinner(gameBoard); // check for winner
        xturn = !xturn; // flip it

        if(winner=="" && isBoardFull(gameBoard)){
            // Cat's game ... no winner!
            winner ="C";
        }
    }// end while

    // cat's game:
    cout<<endl;
    if(winner=="C"){
        cout<<"It was the Cat's Game! NO WINNER!!"<<endl;
    }else{
        cout<<"The winner is: "<<winner<<endl; // prints X or O
    }
    cout<<endl; // extra space
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