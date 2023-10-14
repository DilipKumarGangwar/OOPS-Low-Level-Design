#include "Game.h"
#include<iostream>
#include<string>
using namespace std;

void Game::initialiseGame()
{
     //initialise board
     int size;
     string name;

     cout<<"Enter the size of board: "<<endl;
     cin>>size;
     board = new Board(size); //Create Board Object

     //Create Players
     cout<<"Enter Player 1 Name: "<<endl;
     cin>>name;
     //getline(cin,name );
     Player *p1 = new Player(name,ENUMSymbolType[0]); //X
     cout<<"Enter Player 2 Name: "<<endl;
     cin>>name;
     //getline(cin,name);
     Player *p2 = new Player(name,ENUMSymbolType[1]);  //O
     //Add them in queue/list
     
     player.push(p1);
     player.push(p2);

     //Now iniialise the board
     board = new Board(size);
     

}

Game::Game()
{
    initialiseGame();
    
}





string Game::GameStart()
{
    int row,col;
    int counter=board->getBoardSize(); 
    counter = counter*counter;
   // ENUMGameStatus gameStatus = ENUMGameStatus::RUNNING;
    while(1) //while game is not over or tie
    {
       //take front player
       Player *playerTurn = player.front();
       cout<<endl<<"Turn of Player= "<<playerTurn->getPlayerName()<<endl;
       cout<<"Where to put the Symbol "<<playerTurn->getPlayerSymbol().getSymbol()<<endl;
       cin>>row>>col;
       
       bool isSymbolPlacedSuccessfully = board->addSymbol(row,col,playerTurn->getPlayerSymbol());
       if(!isSymbolPlacedSuccessfully)
       {
        //player can not insert the piece into this cell, player has to choose another cell
         cout<<"Either Incorrect possition chosen or cell is filled already ..try again"<<endl<<endl;
         
         cout<<"Board Status:"<<endl;
         board->printBoard();
         continue;
       }
        player.pop();  //pop this player as it has played its chance
        player.push(playerTurn); //add player at last

        counter--; //as one more cell is filled
       
        cout<<endl;
        cout<<"Board Status:"<<endl;
        board->printBoard();

      //find winner, if exists
       bool status = isThereWinner(row,col,playerTurn->getPlayerSymbol());
       if(status)
       {
          cout<<"Player : "<<playerTurn->getPlayerName() <<" Won the game "; 
          return playerTurn->getPlayerName() ;
       }
       if(counter==0)
          return "Tie";   

   }  //end of while


}

bool Game::isThereWinner(int row,int col, Symbol symbol)
{
    bool rowMatch=true;
    bool colMatch=true;
    bool diagonalMatch=true;
    bool SecdiagonalMatch=true;
    int n= board->getBoardSize();
    

    //check the row
    for(int i=0;i<n;i++)
    {
        if(board->getSymbol(row,i).getSymbol() != symbol.getSymbol())
        {
          rowMatch= false;
          break;
        }
    }  
   
    for(int i=0;i<n;i++)
    {
        if(board->getSymbol(i,col).getSymbol() != symbol.getSymbol())
        {
          colMatch= false;
          break;
        }
    }   

    //check primary diagonal
    for(int i=0;i<n;i++)
    {
        if(board->getSymbol(i,i).getSymbol() != symbol.getSymbol())
        {
          diagonalMatch= false;
          break;
        }
    }  

    //check secondary diagonal 
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        if(board->getSymbol(i,j).getSymbol() != symbol.getSymbol())
        {

          SecdiagonalMatch= false;
          break;
        }
    }  
    return rowMatch || colMatch || diagonalMatch || SecdiagonalMatch;
}