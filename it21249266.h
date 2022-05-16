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

//derived classes
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