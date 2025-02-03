#include"HumanPlayer.h"
HumanPlayer::HumanPlayer(const std::string& playerName, char playerSymbol) 
        : Player(playerName, playerSymbol) {};
int HumanPlayer:: getMove(const std::vector<char>& board)  {
        int move;
        std::cout << name << "'s turn (Enter 0-8): ";
        std::cin >> move;
        return move;
    }