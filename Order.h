//IT21299766_Dharmarathna T.N.D
#pragma once
#include<iostream>
//Create  product class
class Order
{
//protected attributes
protected:
	char Order_ID[10];
	char Customer_ID[10];
	char Customer_Name[20];

//public methods
public:
	Order();
	Order(const char O_ID, const char C_ID, char C_Name);
	Order(const char O_ID[], const char  C_ID[], char C_Name[]);
	void setOrder_ID(const char O_ID);//setters
	void setCustomer_ID(const char C_ID);
	void setCustomer_Name(const char C_Name);
	void setOrder_ID(const char O_ID[]);
	void setCustomer_ID(const char C_ID[]);
	void setCustomer_Name(const char C_Name[]);
	char getOrder_ID();//getters
	char getCustomer_ID();
	char getCustomer_Name();
	void DisplayOrderDetails();
	~Order();//Destructor

};
