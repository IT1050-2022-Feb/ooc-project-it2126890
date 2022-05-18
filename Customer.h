
//  IT21252990_Jayathilaka A.G.K.D

#pragma once
#include"Order.h" //Add header files

//Create Customer class
class Customer {

//Protected attributes
protected:
  char C_ID[10];
  char C_Name[30];
  char C_Email[30];
  Order *O1 ;

//Include Public methods
public:
  Customer(); //Default constructor
  Customer(const char pC_ID[], const char pC_Name[], const char pC_email[] , Order *ord1); //Overloaded costructor
  void setC_ID(const char pC_ID[]);//setters
  void setC_Name(const char pC_Name[]);
  void setC_Email(const char pC_email[]);
  char getC_ID();//getters
  char getC_Name();
  char getC_Email();
  void displayCustomerDetails();
  ~Customer(); //Destructor
};
