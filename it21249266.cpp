#include "it21249266.h"
#include<iostream>
#include<cstring>

using namespace std;

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