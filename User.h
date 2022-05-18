//  IT21352294_Jayawardhana J.R.K.B

#pragma once
# include <iostream>
#include "Customer.h" // Add header files
using namespace std;

class User
{
//Protected attributes
protected:
	char User_ID[10];
	char User_Name[20];
	char U_Password[20];
	char User_Type[20];
  Customer * C2;

//Public methods
public:
	User();
	User(const char pU_ID[], const char pU_Name[], const char pU_Pw[], const char pU_Type[]);//Overloaded constructor
	void setUser_ID(const char pU_ID[]);
	void setUser_Name(const char pU_Name[]);
	void setU_Password(const char pU_Pw[]);
	void setUser_Type(const char pU_Type[]);
	char getUser_ID();
	char getUser_Name();
	char getU_Password();
	char getUser_Type();
  void addCustomer(Customer *pC2)
  {
    C2 = pC2;
  } 
	void Display() {
		cout << "this is User class" << endl;
	}
	void displayUserDetails();
	~User();//Destructor
};