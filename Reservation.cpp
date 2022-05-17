//created by IT21562488 - A.H.S ANJANA

#include "Reservation.h"
#include<iostream>
#include <string>
using namespace std;


Reservation::Reservation()
{
	reservationNo = 00;
	reservationDate = "DD/MM/YYYY";
	mealType = " ";
	seatType = " ";
	
}

Reservation::Reservation(int rNo,string rDate,string mType,string sType)
{

	reservationNo = rNo;
	reservationDate = rDate;
	mealType = mType;
	seatType = sType;
	
	
}
void Reservation::addTicket(Ticket *t)
{
	
}
void Reservation::addPassenger(Passenger *p)
{
	
}
void Reservation::cancelReservation ()
{
	
}
void Reservation::validateReservation ()
{
	
}
void Reservation::displayReservationDetails ()
{
	
}
void Reservation::displayTicket ()
{
	
	tic -> displayTicketDetails();
}
Reservation::~Reservation ()
{
	cout<<"Reservation shutting down"<<endl;
	delete tic;
}
