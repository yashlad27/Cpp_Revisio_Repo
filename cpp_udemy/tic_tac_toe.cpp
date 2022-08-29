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
//------|Getting User Input|-----------//
//-------------------------------------//
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS]){
    int row = -1;
    int col = -1;
    bool keepASKING = true;

    while(keepASKING){
        // keep asking until you get a valid answer:
        cout<<"Please enter the ROW then the COLUMN, each from 0, 1 or 2, seperated by space!"<<endl;
        cin>>row;
        cin>>col;
        if(row>=0 && col>=0 && row<=2 && col<=2){
            // in range selection
            // but it still can be occupied by an X or O already...
            if(!cellAlreadyOccupied(row, col, gameBoard)){
                // only set the cell if row/col is valid AND not occupied!
                keepASKING = false;
            }else{
                cout<<"That cell is already occupied!!!"<<endl;
            }
        }
    }// end while
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
    int countFILL=0;
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            if(gameBoard[i][j]!=" "){
                return true;
                countFILL++;
            }
        }
        cout<<endl;
    }
    return countFILL == 9; // all 9 cells are FULL!
}

//-------------------------------------//
//------|cells already occupied|-------//
//-------------------------------------//
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]){
    // for(int i=0; i<ROWS; i++){
    //     for(int j=0; j<COLS; j++){
    //         if(gameBoard[row][col]!=" "){
    //             return true;
    //             cout<<row<<" "<<col;
    //         }else{
    //             return false;
    //             cout<<"Cell is already occupied!";
    //         }
    //     }
    //     cout<<endl;
    // }

    return gameBoard[row][col] != " "; // if not a space, then it's occupied 
}