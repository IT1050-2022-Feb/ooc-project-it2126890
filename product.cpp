//IT21262890_UYANGODA.U.M.V.B
#include "product.h"//Add header files
#include<iostream>
#include<cstring>
using namespace std;//Use namespaces

product::product()//Implement default constructor
{
  strcpy(P_ID , "")  ;
  strcpy(P_Name , "") ;
  P_Price = 0.0 ;
  a1 = new Order();
 
}

product::product( const char pP_ID[] , const char pP_Name[] , double pP_Price, Order *or1 )// Implement overloaded constructor
{
  strcpy(P_ID , pP_ID)  ;
  strcpy(P_Name ,pP_Name ) ;
  P_Price = pP_Price ;
  o1 = or1;

}

void product::setP_ID(const char pP_ID[]){}
void product::setP_Name(const char pP_Name[]){}
void product::setP_Price(double pP_Price ){}

char product:: getP_ID(){}
char product::getP_Name(){}
double product::getP_Price(){}

product::~product()//Implement destructor
{
  cout << "Delete product" << endl ;
  delete o1;
}

