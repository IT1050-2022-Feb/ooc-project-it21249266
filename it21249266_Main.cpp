//Created by IT21249266 PEIRIS ARD

#include "Staff.h"
#include "Manager.h"
#include "Agent.h"
#include <cstring>
#include <iostream>
using namespace std;

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
