//  IT21352294_Jayawardhana J.R.K.B

#pragma once
#include "User.h"
#include"Feedback.h"
#include<iostream>
using namespace std;

class Manager: public User
{
//Protected attributes.
protected:
	char Manager_ID[10];
	char Manager_Name[20];
	char M_Password[20];
  Feedback * f2 ;

//Public methods.
public:
	Manager();//Default constructor
	Manager(const char pM_ID[], const char pM_Name[], 
const char pM_Pw[],Feedback * pf2 );//Overloaded constructor
	void setManager_ID(const char pM_ID[]);
	void setManager_Name(const char pM_Name[]);
	void setM_Password(const char pM_Pw[]);
	char getManager_ID();
	char getManager_Name();
	char getM_Password();
	void Display() {
		cout << "this is Manager class. derived class from User" << endl;
	}
	void displayManagerDetails();
	~Manager();//Destructor.
};