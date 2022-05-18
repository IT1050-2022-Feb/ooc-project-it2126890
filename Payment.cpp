//IT21299766_Dharmarathna T.N.D
#include "payment.h"
#include<cstring>
#include<iostream>
using namespace std;//Use namespaces


payment::payment()//Implement default constructor
{
	strcpy(Order_ID , "");
  Amount = 0.0 ;
  Discount = 0.0 ;
	strcpy (paymentMethod , "");
  strcpy(Customer_Name ,"");

}


payment::payment(const char O_ID[], double pAmount, double dis, const char payMethod[],const char C_Name[])// Implement overloaded constructor
{

  strcpy(Order_ID , O_ID);
  Amount = pAmount ;
  Discount = dis ;
	strcpy (paymentMethod , payMethod);
  strcpy(Customer_Name ,C_Name);
  
}

void payment::setOrder_ID(const char O_ID[])
{
  
}
void payment::setAmount(double pAmount)
{
  
}
void payment::setDiscount(double dis)
{
  
}
void payment::setPaymentMethod(const char payMethod[])
{
  
}
void payment::setCustomer_Name(const char C_Name[])
{
  
}
char payment::getOrder_ID()
{
  
}
double payment::getAmount()
{
  
}
double payment::getDiscount()
{
  
}
char payment::getPaymentMethod()
{
  
}
char payment::getCustomer_Name()
{
  
}
void payment::displayPaymentDetails()
{
  
}
payment::~payment()//Implement of destructor
{
  cout << "Delete Payment" << endl ;
}