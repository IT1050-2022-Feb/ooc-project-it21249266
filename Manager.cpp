//Created by IT21249266 PEIRIS ARD

#include "Manager.h"
#include "Staff.h"
#include <cstring>
using namespace std;

Manager::Manager() {

	commission = 0;
}

Manager::Manager(char ID[], char name[], char mail[], char phone[], int sal)
	: Staff(ID, name, mail, phone, sal) {

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

