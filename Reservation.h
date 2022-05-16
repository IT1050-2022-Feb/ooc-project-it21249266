//created by IT21562488 - A.H.S ANJANA
#pragma once
#include "Tickect.h"
#include "Passenger.h"
#include "Staff.h"
#include "Report.h"
#include<iostream>
#include <string>
using namespace std;

class Reservation 
{
  private:
    int reservationNo; 
    string reservationDate;
    string mealType; 
    string seatType; 
    
    Ticket *tic;
    passenger *pas;
    
   public:
     Reservation()
     Reservation(int rNo,string rDate,string mType,string sType)
     void addTicket(Ticket *t)
     void addPassenger(Passenger *p)
     void calcelReservation ()
     void validateReservation ()
     void displayTickect ()
     void displayReservationDetails ()
     ~Reservation ()
};

