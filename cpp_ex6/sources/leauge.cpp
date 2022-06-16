#include "leauge.hpp"
#include <string>


namespace basketball{
    Leauge::Leauge(){
        char arr[8];
        arr[0] = 't';
        arr[1] = 'e';
        arr[2] = 'a';
        arr[3] = 'm';
        arr[4] = ' ';
        arr[7] = '\0';
        // create 20 teams
        for(unsigned int i = 0; i < MAX_SIZE; i++){
            if(i < 10){
                arr[5] = 48+i;
                arr[6] = ' ';
            }
            else{
                arr[5] = 49;
                arr[6] = 48+(i%10);
            }
            Team* newTeam = new Team(arr, (i%10)/10);
            teams.push_back(newTeam);
        }
    }
    Leauge::Leauge(vector<Team*> args){
        char arr[8];
        arr[0] = 't';
        arr[1] = 'e';
        arr[2] = 'a';
        arr[3] = 'm';
        arr[4] = ' ';
        arr[7] = '\0';

        if (args.size() == MAX_SIZE){
            for (unsigned long i = 0; i < MAX_SIZE; i++){
                teams.push_back(args.at(i));
            }     
        }
        else{
            for (unsigned long i = 0; i < args.size(); i++){
                teams.push_back(args.at(i));
            }
            for (unsigned long i = args.size(); i < MAX_SIZE; i++){
                if(i < 10){
                    arr[5] = 48+i;
                    arr[6] = ' ';
                }
                else{
                    arr[5] = 49;
                    arr[6] = 48+(i%10);
                }
                Team* newTeam = new Team(arr, (i%10)/10);
                teams.push_back(newTeam);
            }
        }
    }
    Leauge::~Leauge(){
        for(unsigned long i = 0; i < MAX_SIZE; i++){
            delete teams.at(i);
        }
    }


    void Leauge::newLeauge(){
        Schedule* sch = new Schedule(teams);
        vector<Game*> games = sch->startSchedule();
        for (unsigned int i = 0; i < games.size(); ++i) {
            games.at(i)->newGame();
        }
    }
    // comare func for sort
    bool compareScore(Team* t1, Team* t2){
        return (t1->teamscore > t2->teamscore);
    }
    void Leauge::bestScoreTeams(int num){
        sort(teams.begin(), teams.end(), compareScore);
        for (unsigned int i = 0; i < num; i++){
            std::cout<<teams.at(i)->nickname<<": "<<teams.at(i)->teamscore<<"\n";
        }
    }
     void Leauge::bestContinuityWins(){
        int MAX = 0;
        for (unsigned int i = 0; i < teams.size(); i++){
            if (MAX < teams.at(i)->max_continuity_wins) {MAX = teams.at(i)->max_continuity_wins;}
        }
        std::cout<<MAX<<std::endl;
    }
    void Leauge::bestContinuityLosts(){
        int MAX = 0;
        for (unsigned int i = 0; i < teams.size(); i++){
            if (MAX < teams.at(i)->max_continuity_losts) {MAX = teams.at(i)->max_continuity_losts;}
        }
        std::cout<<MAX<<std::endl;
    }
    void Leauge::moreScoreThen(){
        int count = 0;
        for (unsigned int i = 0; i < teams.size(); i++){
            if (teams.at(i)->teamscore > (teams.at(i)->teamscoreminus)) {count++;}
        }
        std::cout<<"count: "<<count<<std::endl;
    }
}