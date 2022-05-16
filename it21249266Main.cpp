#include "it21249266.h"
#include<iostream>
#include<cstring>

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