//IT21262890_UYANGODA.U.M.V.B..
#include<iostream>
#include "product.h" // Add header files

//Create Music class
class Music :public product{

//protected attributes
  protected:
    char Music_ID[50];
    char Music_Name[50];
    char Music_Artist[50];
    double Music_Price;
    int Music_year;
    char Music_Album[50];

//public methods
  public:
     Music();//Default constructor
    Music(const char pM_ID[],char pM_Name[],const char pM_Artist[], double pM_Price,int pM_year,const char pM_Album[]);//Overloaded constructor
    void setMusic_ID(char pM_ID[]);//setters
    void setMusic_Name(char pM_Name[]);
    void setMusic_Artist(char pM_Artist[]);
    void setMusic_Price(double pM_Price);
    void setMusic_year(int pM_year);
    void setMusic_Album(float pM_Album[]);
    char getMusic_ID();//getters
    char getMusic_Name();
    char getMusic_Artist();
    double getMusic_Price();
    int getMusic_year();
    float getMusic_Album();
    void DisplayMusicDetails();
    ~Music();//Destructor
};
