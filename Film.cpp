//IT21262890_UYANGODA.U.M.V.B
#include "Film.h"//Add header files
#include<iostream>
#include<cstring>

using namespace std ;//Use namespaces


Film::Film()//Implement default constructor
{
  strcpy(Film_ID , "")  ;
  strcpy(Film_Name , "") ;
  strcpy(Film_Director , "") ;
  Film_Price = 0.0 ;
  Film_year = 0 ;
  Film_Rating = 0.0 ;
}

Film::Film(const char pF_ID[],char pF_Name[],const char pF_Director[], double pF_Price,int pF_year,float pF_Rating)// Implement overloaded constructor
{
  strcpy(Film_ID , pF_ID)  ;
  strcpy(Film_Name ,pF_Name ) ;
  strcpy(Film_Director , pF_Director) ;
  Film_Price = pF_Price ;
  Film_year = pF_year ;
  Film_Rating = pF_Rating ;
}

void Film::setFilm_ID(char pF_ID[]){}
void Film::setFilm_Name(char pF_Name[]){}
void Film::setFilm_Director(char pF_Director[]){}
void Film::setFilm_Price(double pF_Price){}
void Film::setFilm_year(int pF_year){}
void Film::setFilm_Rating(float pF_Rating){}

char Film::  getFilm_ID(){}
char Film::getFilm_Name(){}
char Film::getFilm_Director(){}
double Film::getFilm_Price(){}
 int Film::getFilm_year(){}
float Film::getFilm_Rating(){}


Film::~Film()//Implement destructor
{
  cout << "Delete Film" << endl ;
}




