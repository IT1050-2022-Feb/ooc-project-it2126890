//  IT21374906 -K.B Samarathunga-

#pragma once
#include <iostream>
using namespace std;

class Feedback
{
private:
	char C_ID[10];
	char C_Name[20];
	char Subject[10];
	char Contend[20];

public:
	Feedback();
	Feedback(const char pC_ID[], const char pC_Name[], const char pSub[], const char Con[]);
	void setC_ID(const char pC_ID[]);
	void setC_Name(const char pC_Name[]);
	void setSubject(const char pSub[]);
	void setContend(const char pCon[]);
	char getC_ID();
	char getC_Name();
	char getSubject();
	char getContend();
	void Display() {
		cout << "this is Feedback class" << endl;
	}
	void DisplayFeedbackDetails();
	~Feedback();

};