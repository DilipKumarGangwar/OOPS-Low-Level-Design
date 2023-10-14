#ifndef GAME_H
#define GAME_H

#include<iostream>
#include "Board.h"
#include <queue>
#include "Player.h"
#include "ENUM_GameStatus.h"
using namespace std;

class Game
{
    queue<Player*> player;
    Board *board;
    void initialiseGame();
   
    public:
     Game();
     string GameStart(); 
     bool isThereWinner(int row,int col,Symbol);
};


#endif