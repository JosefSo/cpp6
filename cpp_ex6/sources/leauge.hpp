//#pragma once
#pragma once
// #include "team.hpp"
 #include "schedule.hpp"


int const MAX_SIZE = 20;

namespace basketball{

    class Leauge{

        public:

        vector<Team*> teams;
        // default constructor
        Leauge();
        // constructor
        Leauge(vector<Team*> args);
        //destructor
        ~Leauge();
        

        void newLeauge();
        void bestScoreTeams(int num);
        void bestContinuityWins();
        void bestContinuityLosts();
        void moreScoreThen();


    };
}