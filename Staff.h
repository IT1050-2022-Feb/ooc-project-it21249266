//Created by IT21249266 PEIRIS ARD

#pragma once
//parent class
class Staff
{
protected:
	char sID[10];
	char sName[20];
	char sEmail[100];
	char sContactNo[10];
	int salary;


public:
	Staff();
	Staff(char ID[], char name[], char mail[], char phone[], int sal);
	void login();
	void viewDetails();
	~Staff();
};
