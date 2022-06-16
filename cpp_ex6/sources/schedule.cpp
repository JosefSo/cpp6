#include "schedule.hpp"

namespace basketball{
    // constructor
    Schedule::Schedule(vector<Team*> args){
        all_teams = args;
    }
    // start new Schedule
    vector<Game*> Schedule::startSchedule(){
        // each team have two games in Schedule: one in, one out.
        vector<Game*> sch;
        // in -vs- out 
        for (unsigned long i = 0; i < all_teams.size(); i++) {
            for (unsigned long j = i; j < all_teams.size(); j++) {
                if(i==j) {continue;}
                Game* game = new Game(all_teams.at(i), all_teams.at(j));
                sch.push_back(game);
            }
        }
        // out -vs- in 
        for (unsigned long i = 0; i < all_teams.size(); i++) {
            for (unsigned long j = i; j < all_teams.size(); j++){
                if(i==j) {continue;}
                Game* game = new Game(all_teams.at(j), all_teams.at(i));
                sch.push_back(game);
            }
        }
        return sch; // return Schedule with games
    }
}