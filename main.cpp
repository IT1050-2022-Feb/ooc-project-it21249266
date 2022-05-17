#include <iostream>
#include <string>

#include "Passenger.h"
#include "Flight.h"
#include "Payment.h"
#include "PayPal.h"
#include "CardPayment.h"
#include "Staff.h"
#include "Agent.h"
#include "Manager.h"
#include "Reservation.h"
#include "Ticket.h"
#include "Report.h"

using namespace std;

int main(){
	// Creating objects
	Passenger* p = new Passenger();
	Flight*  f = new Flight();
	Payment* pay = new Payment();
	PayPal* pp = new PayPal();
	CardPayment* c = new CardPayment();
	Staff* s = new Staff();
	Agent* a = new Agent();
	Manager* m = new Manager();
	Reservation* r = new Reservation();
	Ticket* t = new Ticket();
	Report* rprt = new Report();
	
	
	//Deleting objects
	delete p;
	delete f;
	delete pay;
	delete pp;
	delete c;
	delete s;
	delete a;
	delete m;
	delete r;
	delete t;
	delete rprt;
	
	
	return 0;
}
