//IT21299766_Dharmarathna T.N.D
#pragma once
#include <iostream>

//Create  product class 
class payment 
{
//private attributes
private:
  char Order_ID[10];
  double Amount;
  double Discount;
  char paymentMethod[20];
  char Customer_Name[20];

//public methods
public:
  payment();

  payment(const char O_ID[], double pAmount, double dis, const char payMethod[],
          const char C_Name[]);
  void setOrder_ID(const char O_ID[]);//setters
  void setAmount(double pAmount);
  void setDiscount(double dis);
  void setPaymentMethod(const char payMethod[]);
  void setCustomer_Name(const char C_Name[]);
  char getOrder_ID();//getters
  double getAmount();
  double getDiscount();
  char getPaymentMethod();
  char getCustomer_Name();
  void displayPaymentDetails();
  ~payment();//Destructor
};