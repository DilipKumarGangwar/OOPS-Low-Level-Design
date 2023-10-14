#include "Player.h"
#include <string>
using namespace std;

Player::Player(string name,Symbol symbol)
{
   this->name =  name;
   this->symbol= symbol;  //assign symbol to player
}

string Player::getPlayerName()
{
    return name;
}


Symbol Player::getPlayerSymbol()
{
    return symbol;
}
