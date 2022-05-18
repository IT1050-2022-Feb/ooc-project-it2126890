
//  IT21252990_Jayathilaka A.G.K.D

#pragma once
#include "Customer.h" // Add header files

//Create UnregisterCustomer class
class UnregisteredCustomer : public Customer {

//Protected attributes
protected:
  char UC_Email[20];

//Public methods
public:
  UnregisteredCustomer(); //Default constructor
  UnregisteredCustomer(const char pUC_Email[]); //Overloaded constructor
  void setUC_Email(const char PUC_Email[]);//setter
  char getUC_Email();//getter
  void displayUnregisteredCustomerDetails();
  ~UnregisteredCustomer(); //Destructor

};