
//  IT21252990_Jayathilaka A.G.K.D

#pragma once
#include "Customer.h" // Add header files
#include"Feedback.h"

//Create RegisteredCustomer class
class RegisteredCustomer : public Customer {

//protected attributes
protected:
  char C_ID[10];
  char C_name[20];
  char Address[20];
  char C_Password[10];
  char C_Email[20];
  char C_DOB[10];
  Feedback *f1 ;

//public methods
public:
  RegisteredCustomer(); //Default constructor
  RegisteredCustomer(const char pC_ID[], const char pC_Name[] , const char pAddress[], const char pC_Pw[], const char pC_Email[], const char pC_DOB[] , Feedback * pf1 ); //Overloaded constructor
  void setC_ID(const char pC_ID[]);//setters
  void setC_Name(const char pC_Name[]);
  void setAddress(const char pAddress[]);
  void setC_Password(const char pC_Pw[]);
  void setC_Email(const char pC_Email[]);
  void setC_DOB(const char pC_DOB[]);
  char getC_ID();//getters
  char getC_Name();
  char getAddress();
  char getC_Password();
  char getC_Email();
  char getC_DOB();
  ~RegisteredCustomer(); //Destructor
};