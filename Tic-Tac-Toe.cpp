#include <iostream>

using namespace std;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
int row,column;
char turn = 'X';
bool draw = false;

void initializeBoard(char board[3][3]) { //function that initializes the tic-tac-toe board
    char current = '1';
    for(int i = 0;i < 3; i++) {
        for(int j = 0;j < 3; j++) {
            board[i][j] = current;
            current++;
        }
    }
}
void display_board() { //shows the board on the console
    cout << "+---+---+---+\n";
    cout << "| " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " |\n";
    cout << "+---+---+---+\n";
    cout << "| " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " |\n";
    cout << "+---+---+---+\n";
    cout << "| " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " |\n";
    cout << "+---+---+---+\n";
}

void player_turn(){ //the function that runs when it is the players turn and the player choose where on the board to make their move.
    if(turn == 'X'){
        cout << "X's move : ";
    }
    else if(turn == 'O'){
        cout << "O's move: ";
    }
    cin >> choice;

    switch(choice) {
        case 1: row = 0; column = 0; break;
        case 2: row = 0; column = 1; break;
        case 3: row = 0; column = 2; break;
        case 4: row = 1; column = 0; break;
        case 5: row = 1; column = 1; break;
        case 6: row = 1; column = 2; break;
        case 7: row = 2; column = 0; break;
        case 8: row = 2; column = 1; break;
        case 9: row = 2; column = 2; break;
        default:
            cout << "Invalid Move";
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = 'X';
        turn = 'O';
    }
    else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = 'O';
        turn = 'X';
    }
    else {
        cout << "Invalid move.";
        player_turn();
    }
    display_board();
}

bool gameover() { //function runs to check if the game is over
    for(int i = 0; i < 3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;

    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;

    draw = true;
    return false;
}

int main() { //main function
    int xWins = 0;
    int oWins = 0;
    int numOfGames = 0;
    int gameNum = 1;
    int draws = 0;
    cout << "How many games would you like to play? (Enter a number from 1-10)\n";
    cin >> numOfGames;
    while(numOfGames <  0 || numOfGames > 10) {
        cout << "That is an invalid number of games. Please reenter.\n";
        cin >> numOfGames;
    }
    cout << "\nT I C  -- T A C -- T O E -- G A M E\n";
    cout << "GAME 1\n";
    while(numOfGames > 0) {
        while (gameover()) {
            display_board();
            player_turn();
            gameover();
        }
        if (turn == 'X' && draw == false) {
            cout << "\nO Wins Game " << gameNum << "\n\n\n";
            oWins++;
        } else if (turn == 'O' && draw == false) {
            cout << "\nX Wins Game " << gameNum << "\n\n\n";
            xWins++;
        } else {
            cout << "\nIt's a draw.\n\n\n";
            draws++;
        }
        numOfGames--;
        gameNum++;
        initializeBoard(board);
        cout << "GAME " << gameNum << endl;
    }
    cout << "X won " << xWins << " times\n";
    cout << "O won " << oWins << " times\n";
    cout << "There were " << draws << " draws\n";
    cout << "In the  " << gameNum << " game set\n";
}
