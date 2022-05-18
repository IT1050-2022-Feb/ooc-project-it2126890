
//  IT21252990_Jayathilaka A.G.K.D

#include "RegisteredCustomer.h" //Add header files
#include <cstring>
#include <iostream>

using namespace std; //Use namespaces

RegisteredCustomer::RegisteredCustomer() //Implement default constructor
{
  strcpy(C_ID, "");
  strcpy(C_Name, "");
  strcpy(Address, "");
  strcpy(C_Password, "");
  strcpy(C_Email, "");
  strcpy(C_DOB, "");
  f1 = 0 ;
}
RegisteredCustomer::RegisteredCustomer(const char pC_ID[], const char pC_Name[],const char pAddress[],const char pC_Pw[],const char pC_Email[],const char pC_DOB[] , Feedback * pf1) //Implement of overloaded constructor
{
  strcpy(C_ID, pC_ID);
  strcpy(C_Name, pC_Name);
  strcpy(Address, pAddress);
  strcpy(C_Password, pC_Pw);
  strcpy(C_Email, pC_Email);
  strcpy(C_DOB, pC_DOB);
  f1 = pf1 ;
}
void RegisteredCustomer::setC_ID(const char pC_ID[]) {}
void RegisteredCustomer::setC_Name(const char pC_Name[]) {}
void RegisteredCustomer::setAddress(const char pAddress[]) {}
void RegisteredCustomer::setC_Password(const char pC_Pw[]) {}
void RegisteredCustomer::setC_Email(const char pC_Email[]) {}
void RegisteredCustomer::setC_DOB(const char pC_DOB[]) {}
char RegisteredCustomer::getC_ID() {}
char RegisteredCustomer::getC_Name() {}
char RegisteredCustomer::getAddress() {}
char RegisteredCustomer::getC_Password() {}
char RegisteredCustomer::getC_Email() {}
char RegisteredCustomer::getC_DOB() {}

RegisteredCustomer::~RegisteredCustomer() //Implement of destructor
{
  cout << "Delete Registered Customer" << endl;
}