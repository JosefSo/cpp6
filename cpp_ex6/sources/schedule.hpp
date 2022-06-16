#pragma once
#include "game.hpp"

namespace basketball{

    class Schedule{
        public:
            vector<Team*> all_teams;
            // constructor
            Schedule(vector<Team*> args);
            // destructor
            ~Schedule(){}


            vector<Game*> startSchedule();

    };
}