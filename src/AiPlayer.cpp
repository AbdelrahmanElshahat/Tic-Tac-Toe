#include"AiPlayer.h"
#include <algorithm>
 AiPlayer::AiPlayer(const std::string& playerName, char playerSymbol) 
        : Player(playerName, playerSymbol) {}
int AiPlayer::getMove(const std::vector<char>& board){
        return findBestMove(board);
    }
char AiPlayer:: getOpponentSymbol() const {
        return (symbol == 'X') ? 'O' : 'X';
    }

    int AiPlayer:: minimax(std::vector<char>& board, bool isMaximizing, int depth) {
        if (checkWinner(board, symbol)) return 10 - depth;
        if (checkWinner(board, getOpponentSymbol())) return depth - 10;
        if (isBoardFull(board)) return 0;

        if (isMaximizing) {
            int bestScore = -1000;
            for (int i = 0; i < 9; i++) {
                if (board[i] == ' ') {
                    board[i] = symbol;
                    bestScore = std::max(bestScore, minimax(board, false, depth + 1));
                    board[i] = ' ';
                }
            }
            return bestScore;
        } else {
            int bestScore = 1000;
            for (int i = 0; i < 9; i++) {
                if (board[i] == ' ') {
                    board[i] = getOpponentSymbol();
                    bestScore = std::min(bestScore, minimax(board, true, depth + 1));
                    board[i] = ' ';
                }
            }
            return bestScore;
        }
    }

    int AiPlayer:: findBestMove(std::vector<char> board) {
        int bestScore = -1000;
        int bestMove = -1;

        for (int i = 0; i < 9; i++) {
            if (board[i] == ' ') {
                board[i] = symbol;
                int moveScore = minimax(board, false, 0);
                board[i] = ' ';

                if (moveScore > bestScore) {
                    bestScore = moveScore;
                    bestMove = i;
                }
            }
        }
        return bestMove;
    }

    bool AiPlayer:: checkWinner(const std::vector<char>& board, char player) const {
        // Check rows, columns and diagonals
        for (int i = 0; i < 9; i += 3)
            if (board[i] == player && board[i+1] == player && board[i+2] == player)
                return true;
        
        for (int i = 0; i < 3; i++)
            if (board[i] == player && board[i+3] == player && board[i+6] == player)
                return true;

        if (board[0] == player && board[4] == player && board[8] == player)
            return true;
        if (board[2] == player && board[4] == player && board[6] == player)
            return true;

        return false;
    }

    bool AiPlayer:: isBoardFull(const std::vector<char>& board) const {
        return std::count(board.begin(), board.end(), ' ') == 0;
    }
