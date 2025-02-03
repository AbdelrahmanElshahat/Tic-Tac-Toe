#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
using namespace std;
class Player
{
protected:
    char symbol;
    std::string name;

public:
    Player(const std::string& playerName, char playerSymbol);
        
    
    virtual int getMove(const std::vector<char>& board) = 0;
    char getSymbol() const ;
    std::string getName() const ;
    virtual ~Player() = default;

};
#endif