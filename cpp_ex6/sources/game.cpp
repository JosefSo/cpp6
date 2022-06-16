#include "game.hpp"

namespace basketball{
    // help funcs
    int random(int num1, int num2) {return (int)((rand()%(num2-num1)) + num1);} // rand func

    Game::Game() {} // do nothing
    Game::Game(Team* _in, Team* _out) {in = _in; out = _out;}

    void Game::newGame(){
        int inRandomScore = random(55,100) + (int)in->teamtalent*10; // 55 - 100 + team talent
        int outRandomScore = random(50,100)+ (int)out->teamtalent*10; // 50 - 100 + team talent

        in->teamscore+=inRandomScore; out->teamscore+=outRandomScore; // update teams score
        in->teamscoreminus+=outRandomScore; out->teamscoreminus+=inRandomScore; // update teams score minus

        if(inRandomScore>outRandomScore) {
            in->gamesWon++; out->gamesLost++; // update game wins and losts
            in->continuity_wins++; out->continuity_wins=0; // continuity_wins
            in->continuity_losts=0; out->continuity_losts++; // continuity_losts
        } 
        if(inRandomScore<outRandomScore) {
            in->gamesLost++; out->gamesWon++; // update game wins
            out->continuity_wins++; in->continuity_wins=0; // continuity_wins
            in->continuity_losts++; out->continuity_losts=0; // continuity_losts
        } 

        if (in->max_continuity_wins < in->continuity_wins) {in->max_continuity_wins = in->continuity_wins;} // update continuity wins 
        if (out->max_continuity_wins < out->continuity_wins) {out->max_continuity_wins = out->continuity_wins;} // update continuity wins 

        if (in->max_continuity_losts < in->continuity_losts) {in->max_continuity_losts = in->continuity_losts;} // update continuity losts 
        if (out->max_continuity_losts < out->continuity_losts) {out->max_continuity_losts = out->continuity_losts;} // update continuity losts 








        // PRINT
        std::string resultWon = (inRandomScore>outRandomScore) ? in->nickname : out->nickname; // Short Hand If Else
        resultWon += " won, ";

        std::string resultLoose = (inRandomScore<outRandomScore) ? in->nickname : out->nickname; // Short Hand If Else
        resultLoose += " lost ";

        // std::cout<<resultWon<<resultLoose<<"  SCORE: "<<inRandomScore<<" : "<<outRandomScore<<std::endl;
    }
} // namespace basketball
