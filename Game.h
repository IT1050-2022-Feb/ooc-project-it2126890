//IT21262890_UYANGODA.U.M.V.B..
#include<iostream>
#include "product.h"// Add header files

//Create game class
class Game :public product{

//protected attributes
  protected:
    char Game_ID[50];
    char Game_Name[50];
    char Game_Deverloper[50];
    double Game_Price;
    int Game_year;

//public methods
  public:
    Game();//Default constructor
    Game(const char pG_ID[],const char pG_Name[],const char pG_Deverloper[], double pG_Price,int pG_year);//Overloaded constructor
    void setGame_ID(char pG_ID[]);//setters
    void setGame_Name(char pG_Name[]);
    void setGame_Deverloper(char pG_Deverloper[]);
    void setGame_Price(double pG_Price);
    void setGame_year(int pG_year);
    char getGame_ID();//getters
    char getGame_Name();
    char getGame_Deverloper();
    double getGame_Price();
    int getGame_year();
    void DisplayGameDetails();
    ~Game();//Destructor

};
