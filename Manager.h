//Created by IT21249266 PEIRIS ARD

#include "Staff.h"
#pragma once
class Manager : public Staff
{
private:
	int commission;

public:
	Manager();
	Manager(char ID[], char name[], char mail[], char phone[], int sal)
		: Staff(ID, name, mail, phone, sal);
	void setCommision(int Com);
	int getCommision();
	void updatePolicies();
	float calculateBudgets();
	~Manager();
};
