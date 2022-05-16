//IT21487934 Chamoda G.M.W.Y.
#include <iostream>
#include "Flight.h"
#include <string>
using namespace std;

Flight::Flight()
{
	 flightID=0;
     deptTime="";
     deptDate="DD/MM/YYYY";
     deptLocation="";
     arrTime="";
     arrDate="";
     arrLocation="";
     noOfSeats=0;
}


void addTicketDetails(ticket *t1,ticket *t2)
{
	
}


void Flight::setFlightDetails(int fID , string deTime, string deDate, string deLocation, string aTime, string aDate, string  aLocation, int no_ofSeats)
{
	flightID=fID
    deptTime=deTime
	deptDate=deDate
    deptLocation=deLocation
	arrTime=aTime
	arrDate=aDate
	arrLocation=aLocation
	noOfSeats=no_ofSeats
	
}


void Flight::displayFlightDetails()
{
	
}

Flight::~Flight()
{
  cout<<"flight shutting douwn"<<endl;
}

