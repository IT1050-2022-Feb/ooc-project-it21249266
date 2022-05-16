// created by IT21487934-Chamoda G.M.W.Y.
#pragma once
#include"Staff.h"
#include"Passenger.h">
#include"Ticket.h"
#include"Report.h"
#include <string>

class Flight {
  private:
     int flightID;
     string deptTime;
     string deptDate;
     string deptLocation;
     string arrTime;
     string arrDate;
     string arrLocation;
     int noOfSeats;
     
     ticket *t[2];

  public:
  	Flight();//constructor
    void setflightDetails(int fID , string deTime, string deDate, string deLocation, string aTime, string aDate, string aLocation, int no_ofSeats);
    void displayflightDetails();
    void addTicketDetails(ticket *t1,ticket *t2)
    ~Flight();//destructure
    
};
