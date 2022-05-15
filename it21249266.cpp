#include<iostream>
#include<cstring>

using namespace std;

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

// main function
int main()
{
    //creating objects of derived classes
    Agent* agt = new Agent();
    Manager* mgr = new Manager();

    //function calling
    agt->login();
    mgr->login();

    agt->contactPassenger();
    agt->viewPassengerDetails();
    agt->updatePassengerDetails();
    agt->contactOtherDepartments();

    mgr->updatePolicies();
    mgr->calculateBudgets();
    
    //deleting dynamic objects
    delete agt;
    delete mgr;

    return 0;

}

//Staff cpp
Staff::Staff() {

	strcpy(sID, "");
	strcpy(sName, "");
	strcpy(sEmail, "");
	strcpy(sContactNo, "");
	salary = 0;
}

Staff::Staff(char ID[], char name[], char mail[], char phone[], int sal) {

	strcpy(sID, ID);
	strcpy(sName, name);
	strcpy(sEmail, mail);
	strcpy(sContactNo, phone);
	salary = sal;
}

void Staff::login() {

}

void Staff::viewDetails() {

}

Staff::~Staff() {
	
}
//Agent cpp
Agent::Agent() {

}

Agent::Agent(char ID[], char name[], char mail[], char phone[], int sal)
		: Staff(ID, name, mail, phone, sal){

}

void Agent::contactPassenger() {

}
void Agent::contactOtherDepartments() {

}
void Agent::updatePassengerDetails() {

}
void Agent::viewPassengerDetails() {

}

Agent::~Agent() {

}

//Manager cpp
Manager::Manager() {

	commission = 0;
}

Manager::Manager(char ID[], char name[], char mail[], char phone[], int sal) 
		: Staff(ID, name, mail, phone, sal){

}
void Manager::setCommision(int Com) {
	commission = Com;
}
int Manager::getCommision() {
	return commission;
}
void Manager::updatePolicies() {

}
float Manager::calculateBudgets() {

}
Manager::~Manager() {

}