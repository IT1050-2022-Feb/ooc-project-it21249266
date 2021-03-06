//Created by IT21470004 - S. R. Bopitiya
#pragma once
#include "Payment.h"
#include <string>
using namespace std;

class CardPayment : public Payment{  //inheritance relationship 
  protected:
    char cardNo [20];
    string cardType;
    string exp;
    char cvv [3];

  public:
    cardPayment();
    void setCardDetails(char CardNo[20], string CardType, string Exp, char CVV[3]);
    void getCardDetails();
    ~cardPayment();
};