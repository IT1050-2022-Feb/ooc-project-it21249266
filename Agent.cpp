//Created by IT21249266 PEIRIS ARD

#include "Agent.h"
#include "Staff.h"
#include <cstring>
using namespace std;

Agent::Agent() {

}

Agent::Agent(char ID[], char name[], char mail[], char phone[], int sal)
	: Staff(ID, name, mail, phone, sal) {

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