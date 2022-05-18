//  IT21352294_Jayawardhana J.R.K.B

#include "User.h"
#include<iostream>//Add header files
#include<cstring>
using namespace std;//Use namespaces
User::User()//creating default constructor
{
	strcpy(User_ID, "");
	strcpy(User_Name, "");
	strcpy(U_Password, "");
	strcpy(User_Type, "");

}

//create overload constructor 
User::User(const char pU_ID[], const char pU_Name[], const char pU_Pw[], const char pU_Type[])
{
	strcpy(User_ID, pU_ID);
	strcpy(User_Name, pU_Name);
	strcpy(U_Password, pU_Pw);
	strcpy(User_Type, pU_Type);
}

//Setters
void User::setUser_ID(const char pU_ID[])
{
	strcpy(User_ID, pU_ID);
}

void User::setUser_Name(const char pU_Name[])
{
	strcpy(User_Name, pU_Name);
}

void User::setU_Password(const char pU_Pw[])
{
	strcpy(U_Password, pU_Pw);
}

void User::setUser_Type(const char pU_Type[])
{
	strcpy(User_Type, pU_Type);
}


//Getters
char User::getUser_ID()
{
	return User_ID[10];
}

char User::getUser_Name()
{
	return User_Name[20];
}

char User::getU_Password()
{
	return U_Password[20];
}

char User::getUser_Type()
{
	return User_Type[20];
}

void User::displayUserDetails()
{
}

User::~User()//Implement destructor
{
	cout << "Destructor runs" << endl;
}