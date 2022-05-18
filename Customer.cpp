
//  IT21252990_Jayathilaka A.G.K.D


#include "Customer.h" //Add header files
#include <cstring>
#include <iostream>

using namespace std; // Use the namespaces

Customer::Customer() // Implement of default constructor
{
  strcpy(C_ID, "");
  strcpy(C_Name, "");
  strcpy(C_Email, "");
  O1 = new Order();
}
Customer::Customer(const char pC_ID[], const char pC_Name[],const char pC_email[], Order *ord1) // Implement overloaded constructor
{
  strcpy(C_ID, pC_ID);
  strcpy(C_Name, pC_Name);
  strcpy(C_Email, pC_email);
  O1 = ord1;
}
void Customer::setC_ID(const char pC_ID[]) {}
void Customer::setC_Name(const char pC_Name[]) {}
void Customer::setC_Email(const char pC_email[]) {}
char Customer::getC_ID() {}
char Customer::getC_Name() {}
char Customer::getC_Email() {}
void Customer::displayCustomerDetails() {}

Customer::~Customer() //Implement of destructor 
{
  cout << "Delete Customer" << endl;
  delete O1;
}