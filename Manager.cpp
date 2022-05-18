#include "Manager.h"
#include<iostream>//Add header files
#include <cstring>//Use namespaces
using namespace std;//creating default constructor
Manager::Manager()
{
	strcpy(Manager_ID, "");
	strcpy(Manager_Name, "");
	strcpy(M_Password, "");
  f2 = 0 ;
}
//create overload constructor 
Manager::Manager(const char pM_ID[], const char pM_Name[], 
const char pM_Pw[],Feedback * pf2)
{
	strcpy(Manager_ID, pM_ID);
	strcpy(Manager_Name, pM_Name);
	strcpy(M_Password, pM_Pw);
  f2 = pf2;
}
//Setters
void Manager::setManager_ID(const char pM_ID[])
{
	strcpy(Manager_ID, pM_ID);
}

void Manager::setManager_Name(const char pM_Name[])
{
	strcpy(Manager_Name, pM_Name);
}

void Manager::setM_Password(const char pM_Pw[])
{
}

//Getters
char Manager::getManager_ID()
{
	return Manager_ID[10];
}

char Manager::getManager_Name()
{
	return Manager_Name[20];
}

char Manager::getM_Password()
{
	return M_Password[20];
}

void Manager::displayManagerDetails()
{
}

Manager::~Manager()//Implement destructor
{
	cout << "Distructor runs" << endl;
}