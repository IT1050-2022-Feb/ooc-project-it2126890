#include <iostream>
#include<cstring>

#include"product.h"
#include"Film.h"
#include"Music.h"
#include"Game.h"
#include"Customer.h"
#include"UnregisteredCustomer.h"
#include"RegisteredCustomer.h"
#include"User.h"
#include"Administrator.h"
#include"Manager.h"
#include"Feedback.h"
#include"Order.h"
#include"Payment.h"

int main() {

  //IT21252990-----Objects Creation Start_---------

  Customer *cus = new Customer(); //Create dynamic object using Customer class 

  RegisteredCustomer *Rcus1 ;
  Rcus1 = new RegisteredCustomer(); //Create dynamic object using RegisteredCustomer class

  UnregisteredCustomer Unrcus1 ; //Create static Object using Unregistered customer class

  //IT21252990-----Objects Creation End-----------

  //IT21374906-----Objects Creation Start---------
  Feedback *Afeed1;
  Afeed1 = new Feedback() ;
  //IT21374906-----Objects Creation End-----------

//IT21352294----Object Creation Start----------------

  User *U1 = new User();
  Customer * pC2 = new Customer();
  U1 -> addCustomer(pC2) ;

  Manager M1;
  Administrator A1 ;
  
  //--------------------
  
  //IT21262890-----Objects Creation Start----------
  
  product * pro= new product(); //Create dynamic object using product class 
  
  Music *mu1 ;
  mu1 = new Music(); //Create dynamic object using Music class

  Film fi1 ; //Create static Object using Film class
  Game ga1 ; //Create static Object using gameclass

  //IT21262890-----Objects Creation End-----------

  //IT21299766----------Objects Creation Start------

  Order *O1 = new Order() ;
  Payment *P1 = new Payment() ;
  
  //IT21299766---------Objects Creation End-------

  //Delete objects------------------------------

  delete cus ;
  delete Rcus1 ;
  delete Unrcus1 ;
  delete Afeed1 ;
  delete pC2 ;
  delete U1 ;
  delete M1 ;
  delete A1 ;
  delete pro ;
  delete mu1 ;
  delete fi1 ;
  delete ga1 ;
  delete O1 ;
  delete P1 ;
  
  return 0 ;
}