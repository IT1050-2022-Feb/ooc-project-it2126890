//IT21299766_Dharmarathna T.N.D
#include "Order.h"
#include<cstring>
#include<iostream>
using namespace std;

Order::Order()//Implement default constructor
{
	strcpy (Order_ID,"");
	strcpy (Customer_ID,"");
	strcpy (Customer_Name,"");
}

Order::Order(const char O_ID[], const char C_ID[], char C_Name[])// Implement overloaded constructor
{
	strcpy(Order_ID, "");
	strcpy(Customer_ID, "");
	strcpy(Customer_Name, "");
}

void Order::setOrder_ID(const char O_ID)
{
	
}

void Order::setCustomer_ID(const char C_ID)
{
	
}

void Order::setCustomer_Name(const char C_Name)
{

}

char Order::getOrder_ID()
{
	
}

char Order::getCustomer_ID()
{
	
}

char Order::getCustomer_Name()
{
	
}


void Order::DisplayOrderDetails()
{
}


Order::~Order()//Implement of destructor
{
	cout << "Delete Order" << endl;
}
