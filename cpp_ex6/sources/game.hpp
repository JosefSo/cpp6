
#pragma once

#include "team.hpp"

namespace basketball{

    class Game{

    public:

        Team* in;
        Team* out;

        // default constructor
        Game();
        // constructor
        Game(Team* _in, Team* _out);
        // destructor
        ~Game() {}

        void newGame();


     
    };
}