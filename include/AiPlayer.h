#include"player.h"
class AiPlayer : public Player
{
public:
    AiPlayer(const std::string& playerName, char playerSymbol);
    int getMove(const std::vector<char>& board) override ;

private:
    char getOpponentSymbol() const ;

    int minimax(std::vector<char>& board, bool isMaximizing, int depth) ;

    int findBestMove(std::vector<char> board) ; 

    bool checkWinner(const std::vector<char>& board, char player) const ;

    bool isBoardFull(const std::vector<char>& board) const ;
};