//IT21262890_UYANGODA.U.M.V.B
#include "Music.h"//Add header files
#include<iostream>
#include<cstring>>
using namespace std;//Use namespaces

Music::Music()//Implement default constructor
{
  strcpy(Music_ID , "")  ;
  strcpy(Music_Name , "") ;
  strcpy(Music_Artist , "") ;
  Music_Price = 0.0 ;
  Music_year = 0 ;
  strcpy(Music_Album ,"");
}
Music::Music(const char pM_ID[],char pM_Name[],const char pM_Artist[], double pM_Price,int pM_year,const char pM_Album[])// Implement overloaded constructor
{
  strcpy(Music_ID , pM_ID)  ;
  strcpy(Music_Name ,pM_Name ) ;
  strcpy(Music_Artist , pM_Artist) ;
  Music_Price = pM_Price ;
  Music_year = pM_year ;
  strcpy(Music_Album , pM_Album) ;
  
}

void Music::setMusic_ID(char pM_ID[]){}
void Music::setMusic_Name(char pM_Name[]){}
void Music::setMusic_Artist(char pM_Artist[]){}
void Music::setMusic_Price(double pM_Price){}
void Music::setMusic_year(int pM_year){}
void Music::setMusic_Album(float pM_Album[]){}

char Music::  getMusic_ID(){}
char Music::getMusic_Name(){}
char Music::getMusic_Artist(){}
double Music::getMusic_Price(){}
int Music::getMusic_year(){}
float Music::getMusic_Album(){}

Music::~Music()//Implement destructor
{
  cout << "Delete Music" << endl ;
}
