#include "player.h"
class HumanPlayer : public Player
{

public:
   HumanPlayer(const std::string& playerName, char playerSymbol);

    int getMove(const std::vector<char>& board) override ;
};
