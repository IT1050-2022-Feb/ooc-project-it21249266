//Created by IT21249266 PEIRIS ARD

#include "Staff.h"
#include <cstring>
using namespace std;

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