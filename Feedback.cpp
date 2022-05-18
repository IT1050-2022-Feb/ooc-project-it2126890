//  IT21374906 -K.B Samarathunga-

#include "Feedback.h"//Add header files
#include<cstring>
#include<iostream>

using namespace std;// Use the namespaces

Feedback::Feedback()// Implement of default constructor
{
	strcpy(C_ID, "");
	strcpy(C_Name, "");
	strcpy(Subject, "");
	strcpy(Contend, "");

}
Feedback::Feedback(
  const char pC_ID[],
  const char pC_Name[],
  const char pSub[],
  const char Con[]
)
{
	strcpy(C_ID, pC_ID);
	strcpy(C_Name, pC_Name);
	strcpy(Subject, pSub);
	strcpy(Contend, Con);
}

void Feedback::setC_ID(const char pC_ID[])
{
	strcpy(C_ID, pC_ID);
}

void Feedback::setC_Name(const char pC_Name[])
{
	strcpy(C_Name, pC_Name);
}

void Feedback::setSubject(const char pSub[])
{
	strcpy(Subject, pSub);
}

void Feedback::setContend(const char Con[])
{
	strcpy(Contend, Con);
}

char Feedback::getC_ID()
{
	return C_ID[10];
}

char Feedback::getC_Name()
{
	return C_Name[20];
}

char Feedback::getSubject()
{
	return Subject[10];
}

char Feedback::getContend()
{
	return Contend[20];
}

void Feedback::DisplayFeedbackDetails()
{
}

Feedback::~Feedback()//Implement destructor
{
	cout << "Distructor runs" << endl;
}

