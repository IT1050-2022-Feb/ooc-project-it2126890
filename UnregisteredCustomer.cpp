
//  IT21252990_Jayathilaka A.G.K.D

#include "UnregisteredCustomer.h" //Add header files
#include <cstring>
#include <iostream>  

using namespace std; //Use namespaces

UnregisteredCustomer::UnregisteredCustomer() //Implement default constructor
{
  strcpy(UC_Email, ""); 
}
UnregisteredCustomer::UnregisteredCustomer(const char pUC_Email[]) // Implement overloaded constructor
{
  strcpy(UC_Email, pUC_Email);
}
void UnregisteredCustomer::setUC_Email(const char PUC_Email[]) {}
char UnregisteredCustomer::getUC_Email() {}
void UnregisteredCustomer::displayUnregisteredCustomerDetails() {}

UnregisteredCustomer::~UnregisteredCustomer() //Implement destructor
{  
  cout << "Delete Unregistered Customer" << endl;
}