//  IT21352294_Jayawardhana J.R.K.B

#include "Administrator.h"
#include<cstring>
#include<iostream>//Add header files
using namespace std;//Use namespaces
Administrator::Administrator()//creating default constructor
{
	strcpy(Admin_ID, "");
	strcpy(Admin_Name, "");
	strcpy(A_Password, "");
  p1 = 0;

}
//create overload constructor 
Administrator::Administrator(const char pA_ID[], const char pA_Name[],
const char pA_Pw[],product * pP1)
{
	strcpy(Admin_ID, pA_ID);
	strcpy(Admin_Name, pA_Name);
	strcpy(A_Password, pA_Pw);
  p1 = pP1;

}
//Setters
void Administrator::setAdmin_ID(const char pA_ID[])
{
	strcpy(Admin_ID, pA_ID);
}

void Administrator::setAdmin_Name(const char pA_Name[])
{
	strcpy(Admin_Name, pA_Name);
}

void Administrator::setAdmin_Password(const char pA_Pw[])
{
	strcpy(A_Password, pA_Pw);
}

//Getters
char Administrator::getAdmin_ID()
{
	return Admin_ID[10];
}

char Administrator::getAdmin_Name()
{
	return Admin_Name[20];
}

char Administrator::getA_Password()
{
	return A_Password[20];
}

void Administrator::DisplayAdminDetails()
{
}

Administrator::~Administrator()//Implement destructor
{
	cout << "Distructor runs" << endl;
}