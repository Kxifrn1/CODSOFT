#include <iostream>
#include <vector>
using namespace std;
void printBoard(const vector<vector<char>> & board) {
    cout << "Current Board:" << endl;
    for (const auto& row : board) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    cout << endl;
}
bool checkWin(const vector<vector<char>>& board, char player) {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || 
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) { 
            return true;
        }
    }    
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}
bool BoardFull(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            if (cell == ' ') return false;
        }
    }
    return true;
}
void resetBoard(vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
}
int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    int playagain;
    do{
    	char currentPlayer = 'X';
	    int row, col;
	    while (true) {
	        printBoard(board);
	        cout<<"Player "<<currentPlayer<<", enter your move (row and column): ";
	        cin>>row>>col;
	        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
	            cout << "Invalid move. Try again." << endl;
	            continue;
	        }
	        board[row - 1][col - 1] = currentPlayer;
	        if (checkWin(board, currentPlayer)) {
	            printBoard(board);
	            cout << "Player " << currentPlayer << " wins!" << endl;
	            break;
	        }
	
	        if (BoardFull(board)) {
	            printBoard(board);
	            cout << "It's a draw!" << endl;
	            break;
	        }
	        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
	    }
	    cout<<"Play again?"<<endl;
	    cout<< "enter 1 to play again"<<endl;
	    cout<<"enter 0 to exit"<<endl;
	    cin>>playagain;
	    if(playagain==1){
	    	resetBoard(board);
		}
	}
	while(playagain);
    
    return 0;
}

