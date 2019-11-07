//
// Created by tiago on 06/11/2019.
//

#ifndef AEDA_TEAM_MANAGER_NATIONALTEAM_H
#define AEDA_TEAM_MANAGER_NATIONALTEAM_H


#include <vector>
#include "People//Person.h"
#include "People//FootballPlayer.h"
#include "People//Technician.h"




class NationalTeam {
private:
public:
    vector<Person*> people;
    vector<FootballPlayer*> players;
    vector<Technician*> technicians;
    NationalTeam();
    bool readPeople(string fileName);




};



#endif //AEDA_TEAM_MANAGER_NATIONALTEAM_H
