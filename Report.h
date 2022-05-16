//Created by IT21470004 - S.R. Bopitiya

#pragma once
#include "Reservation.h"
#include "Flight.h"
#include "Payment.h"
#include <string>
using namespace std;

class Report
{
  private:
    int reportNo;
    string reportDate;

  public:
Report();  //constructor
void generateReservationReport(Reservation* r);
generatePaymentReport
}