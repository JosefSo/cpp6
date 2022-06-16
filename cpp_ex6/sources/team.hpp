//#pragma once
#pragma once

#include <iostream>
#include <string.h>
#include <string>
#include <vector>

using std::string;
using std::vector;


namespace basketball{

    class Team{

    public:

        string nickname;
        double teamtalent;

        int teamscore;
        int teamscoreminus;
        int gamesWon;
        int gamesLost;
        // continuity wins
        int continuity_wins;
        int max_continuity_wins;
        // continuity losts
        int continuity_losts;
        int max_continuity_losts;


        // default constractor
        Team(){}
        // constructor
        Team(string _nickname, double _talent);
        // destructor
        ~Team() { }
    };
}