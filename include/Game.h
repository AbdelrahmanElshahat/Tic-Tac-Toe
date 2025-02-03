#include<iostream>
#include<vector>
#include<memory>
#include<algorithm>
#include "player.h"
#include "HumanPlayer.h"
#include "AiPlayer.h"
using namespace std;
class Game
{
private:
    std::vector<char> board;
    std::unique_ptr<Player> player1;
    std::unique_ptr<Player> player2;
    Player* currentPlayer;

public:
    Game();

    void initialize() ;

    void displayBoard() const ;

    bool isValidMove(int pos) const ;

    bool checkWinner(char symbol) const ;

    bool isBoardFull() const ;
    void play() ;
};
