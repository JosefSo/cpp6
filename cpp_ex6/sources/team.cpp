#include "team.hpp"

namespace basketball{

    Team::Team(string _nickname, double _talent){
        nickname = _nickname;
        teamtalent = _talent;
        teamscore = 0;
        teamscoreminus = 0;
        gamesWon = 0;
        gamesLost = 0;
        continuity_wins = 0;
        max_continuity_wins = 0;
        continuity_losts = 0;
        max_continuity_losts = 0;
    }
}