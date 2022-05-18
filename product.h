//IT21262890_UYANGODA.U.M.V.B
#include<iostream>
#include "Order.h"


 //Create  product class 
 class product

{//protected attributes
  protected:
    
    char P_ID[50];
    char P_Name[50];
    double P_Price;
    Order * o1;
    

//public methods
  public:
    product();//Default constructor
    product( const char pP_ID[] , const char pP_Name[] , double pP_Price,Order *or1 );//Overloaded constructor
    void setP_ID(const char pP_ID[] );//setters
    void setP_Name(const char pP_Name[] );
    void setP_Price(double pP_Price );
    char getP_ID(); //getters
    char getP_Name();  
    double getP_Price();
    void DisplayProductsDetails();
    ~product(); //Destructor
    
};