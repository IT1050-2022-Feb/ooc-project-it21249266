//Created by IT21479250 Gunathilaka I.U.
#include "Passenger.h"
#include <iostream>
using namespace std;

Passenger::Passenger(){
	PID = 0000;
	name = "";
	email = "";
}
void Passenger::setDetails(int pPID, string pname, string pemail){
	PID = pPID;
	name = pname;
	email = pemail;
}
void Passenger::displayPaymentDetails(Payment *pPaymt){
	cout << "Passenger ID : " << PID << endl;
	paymt = pPaymt;
	cout << "The payment details : " << paymt->getPaymentDetails();
}
void Passenger::getPDetails(){
	cout << "Passenger ID : " << pID << endl;
	cout << "Passenger name : " << name << endl;
	cout << "Passenger email : " << email << endl;
}
void Passenger::bookTicket(){
	for (int i = 0; i < SIZE; i++)
		tikt[i] = new Ticket();
}

Passenger::~Passenger(){
	for (int i = 0; i < SIZE; i++)
		delete tikt[i];
}