//Created by IT21249266 PEIRIS ARD
#pragma once
#include "Staff.h"

class Agent : public Staff
{
public:
	Agent();
	Agent(char ID[], char name[], char mail[], char phone[], int sal)
		: Staff(ID, name, mail, phone, sal);
	void contactPassenger();
	void contactOtherDepartments();
	void updatePassengerDetails();
	void viewPassengerDetails();
	~Agent();
};


