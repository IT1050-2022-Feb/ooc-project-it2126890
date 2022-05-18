//IT21262890_UYANGODA.U.M.V.B
#include "Game.h"//Add header files
#include<iostream>
#include"cstring"

using namespace std;//Use namespaces

Game::Game()//Implement the default constructor
{
  strcpy(Game_ID , "")  ;
  strcpy(Game_Name , "") ;
  strcpy(Game_Deverloper , "") ;
  Game_Price = 0.0 ;
  Game_year = 0 ;
  
}
Game:: Game(const char pG_ID[],const char pG_Name[],const char pG_Deverloper[], double pG_Price,int pG_year)// Implement overloaded constructor
{
  strcpy(Game_ID , pG_ID)  ;
  strcpy(Game_Name ,pG_Name ) ;
  strcpy(Game_Deverloper , pG_Deverloper) ;
  Game_Price = pG_Price ;
  Game_year = pG_year ;
 
}

void Game::setGame_ID(char pG_ID[]){}
void Game::setGame_Name(char pG_Name[]){}
void Game::setGame_Deverloper(char pG_Deverloper[]){}
void Game::setGame_Price(double pG_Price){}
void Game::setGame_year(int pG_year){}
  
char Game:: getGame_ID(){}
char Game::getGame_Name(){}
char Game::getGame_Deverloper(){}
double Game::getGame_Price(){}
int Game::getGame_year(){}

Game::~Game()//Implement destructor
{
  cout << "Delete Game" << endl ;
}