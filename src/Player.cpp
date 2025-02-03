#include"player.h"
Player::Player(const std::string& playerName, char playerSymbol) 
    : name(playerName), symbol(playerSymbol) {}
char Player::getSymbol() const { return symbol; }
std::string Player:: getName() const { return name; }