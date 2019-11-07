#pragma once
#ifndef AEDA_TEAM_MANAGER_TECHINICALTEAM_H
#define AEDA_TEAM_MANAGER_TECHINICALTEAM_H
#include "Date.h"
#include "Person.h"

class Technician: public Person{

    string role;
    float salary;
public:

    Technician(string name, Date date);
};


#endif //AEDA_TEAM_MANAGER_TECHINICALTEAM_H
