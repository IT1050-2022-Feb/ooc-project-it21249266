//Created by IT21479250 Gunathilaka I.U.
#include "Ticket.h"
#include <iostream>
using namespace std;

Ticket::Ticket(){
	TID = 0;
	tPrice = 0.00;
	tType = 0;
	tDate = "0000/00/00";
}
void Ticket::addTicketDetails (int pTID, float ptPrice, int ptType, string ptDate){
	TID = pTID;
	tPrice = ptPrice;
	tType = ptType;
	tDate = ptDate;
}
void Ticket::displayTicketDetails(){
	cout << "Ticket ID : " << TID << endl;
	cout << "Ticket price : " << tPrice << endl;
	cout << "Ticket Type : " << tType << endl;
	cout << "Ticket issued date : " << tDate << endl;
}
Ticket::~Ticket(){
	cout << "Ticket Deleted" << endl;
}