//IT21262890_UYANGODA.U.M.V.B
#include<iostream>
#include "product.h"// Add the header files

//Create film class
class Film :public product{


//protected attributes
  protected:
    char Film_ID[50];
    char Film_Name[50];
    char Film_Director[50];
    double Film_Price;
    int Film_year;
    float Film_Rating;

//public methods
    public:
    Film();//Default constructor
    Film(const char pF_ID[],char pF_Name[],const char pF_Director[], double pF_Price,int pF_year,float pF_Rating);//Overloaded constructor
    void setFilm_ID(char pF_ID[]);//setters
    void setFilm_Name(char pF_Name[]);
    void setFilm_Director(char pF_Director[]);
    void setFilm_Price(double pF_Price);
    void setFilm_year(int pF_year);
    void setFilm_Rating(float pF_Rating);
    char getFilm_ID();//getters
    char getFilm_Name();
    char getFilm_Director();
    double getFilm_Price();
    int getFilm_year();
    float getFilm_Rating();
    void DisplayFilmDetails();
    ~Film();//Destructor
};