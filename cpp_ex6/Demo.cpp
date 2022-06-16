/**
 * Demo file for the exercise on basketball
 *
 * @author Josef Sokolov
 * @since 2022-06
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "game.hpp"
#include "leauge.hpp"

using namespace basketball;

int main() {

    Leauge* leauge = new Leauge();

    //print
    // for(unsigned long i = 0; i < MAX_SIZE; i++){
    //     cout<<leauge->teams.at(i)->nickname<<endl;
    // }

    leauge->newLeauge();

    leauge->bestScoreTeams(5);


    
    
}
