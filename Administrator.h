//  IT21352294_Jayawardhana J.R.K.B

#pragma once
#include "User.h"
#include"product.h"
#include<iostream>
using namespace std;

class Administrator:public User
{
//Protected attributes
protected:
	char Admin_ID[10];
	char Admin_Name[20];
	char A_Password[20];
  product * p1;

//Public methods
public:
	Administrator();//Default constructor
	Administrator(const char pA_ID[],const char pA_Name[],
const char pA_Pw[],product * pP1);//Overloaded constructor
	void setAdmin_ID(const char pA_ID[]);
	void setAdmin_Name(const char pA_Name[]);
	void setAdmin_Password(const char pA_Pw[]);
	char getAdmin_ID();
	char getAdmin_Name();
	char getA_Password();
	void Display() {
		cout << "this is Administrator calss.derived class from User" << endl;
	}

	void DisplayAdminDetails();
	~Administrator();//Destructor

};