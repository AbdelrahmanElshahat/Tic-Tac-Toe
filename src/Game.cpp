#include"Game.h"
Game::Game() : board(9, ' ') {}
void Game::initialize() {
        std::string playerType;
        std::cout << "First player - Human or Ai? (H/A): ";
        std::cin >> playerType;

        char symbol;
        std::cout << "Choose symbol for first player (X/O): ";
        std::cin >> symbol;
        symbol = std::toupper(symbol);

        char secondSymbol = (symbol == 'X') ? 'O' : 'X';

        if (playerType == "H" || playerType == "h") {
            player1 = std::make_unique<HumanPlayer>("Player 1", symbol);
        } else {
            player1 = std::make_unique<AiPlayer>("Ai 1", symbol);
        }
        std::cout << "Second player - Human or Ai? (H/A): ";
        std::cin >> playerType;

        if (playerType == "H" || playerType == "h") {
            player2 = std::make_unique<HumanPlayer>("Player 2", secondSymbol);
        } else {
            player2 = std::make_unique<AiPlayer>("Ai 2", secondSymbol);
        }

        currentPlayer = player1.get();
    }
void Game:: displayBoard() const {
        for (int i = 0; i < 9; i++) {
            std::cout << board[i];
            if (i % 3 == 2) std::cout << "\n";
            else std::cout << "|";
        }
        std::cout << "\n";
    }
    bool Game:: isValidMove(int pos) const {
        return pos >= 0 && pos < 9 && board[pos] == ' ';
    }
    bool Game :: checkWinner(char symbol) const {
        // Check rows, columns and diagonals
        for (int i = 0; i < 9; i += 3)
            if (board[i] == symbol && board[i+1] == symbol && board[i+2] == symbol)
                return true;
        
        for (int i = 0; i < 3; i++)
            if (board[i] == symbol && board[i+3] == symbol && board[i+6] == symbol)
                return true;

        if (board[0] == symbol && board[4] == symbol && board[8] == symbol)
            return true;
        if (board[2] == symbol && board[4] == symbol && board[6] == symbol)
            return true;

        return false;
    }
    bool Game:: isBoardFull() const {
        return std::count(board.begin(), board.end(), ' ') == 0;
    }
    void Game:: play() {
        std::cout << "Tic Tac Toe Game\n";
        std::cout << "Board positions:\n";
        std::cout << "0|1|2\n3|4|5\n6|7|8\n\n";

        while (true) {
            displayBoard();
            
            int move;
            do {
                move = currentPlayer->getMove(board);
            } while (!isValidMove(move));

            board[move] = currentPlayer->getSymbol();

            if (checkWinner(currentPlayer->getSymbol())) {
                displayBoard();
                std::cout << currentPlayer->getName() << " wins!\n";
                break;
            }

            if (isBoardFull()) {
                displayBoard();
                std::cout << "It's a tie!\n";
                break;
            }

            currentPlayer = (currentPlayer == player1.get()) ? player2.get() : player1.get();
        }
    }