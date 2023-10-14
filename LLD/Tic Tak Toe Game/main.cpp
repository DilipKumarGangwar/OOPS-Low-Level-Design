#include "Symbol.h"
#include "Player.h"
#include "Board.h"
#include "Game.h"

int main()
{
    Game *game = new Game();
    string s = game->GameStart();
    if(s=="Tie")
      cout<<"Game is Tie"<<endl;
    else
      cout<<"Game is Won"<<endl;  
    return 0;

}