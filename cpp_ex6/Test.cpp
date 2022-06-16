#include <iostream>
#include <string>
#include <vector>
#include "sources/game.hpp"
#include "sources/leauge.hpp"
#include "doctest.h"

using namespace std;
using namespace basketball;

TEST_CASE("ALL TESTS"){
    Team* team1 = new Team("first", 0.1);
    Team* team2 = new Team("second", 0.2);
    Team* team3 = new Team("third", 0.3);
    Team* team4 = new Team("four", 0.4);
    Team* team5 = new Team("five", 0.5);
    Team* team6 = new Team("six", 0.6);
    Team* team7 = new Team("seven", 0.7);
    Team* team8 = new Team("eight", 0.8);
    Team* team9 = new Team("nine", 0.9);
    // CHECK_NOTHROW(Team* team1 = new Team("first", 0.1));
    // CHECK_NOTHROW(Team* team2 = new Team("second", 0.2));
    // CHECK_NOTHROW(Team* team3 = new Team("third", 0.3));
    // CHECK_NOTHROW(Team* team4 = new Team("four", 0.4));
    // CHECK_NOTHROW(Team* team5 = new Team("five", 0.5));
    // CHECK_NOTHROW(Team* team6 = new Team("six", 0.6));
    // CHECK_NOTHROW(Team* team7 = new Team("seven", 0.7));
    // CHECK_NOTHROW(Team* team8 = new Team("eight", 0.8));
    // CHECK_NOTHROW(Team* team9 = new Team("nine", 0.9));

    //cout<<team2->nickname<<endl; // second
    
    CHECK_EQ(team1->nickname, "first");
    CHECK_EQ(team2->nickname, "second");
    CHECK_EQ(team3->nickname, "third");
    CHECK_EQ(team4->nickname, "four");
    CHECK_EQ(team5->nickname, "five");
    CHECK_EQ(team6->nickname, "six");
    CHECK_EQ(team7->nickname, "seven");
    CHECK_EQ(team8->nickname, "eight");
    CHECK_EQ(team9->nickname, "nine");

    CHECK_EQ(team1->teamtalent, 0.1);
    CHECK_EQ(team2->teamtalent, 0.2);
    CHECK_EQ(team3->teamtalent, 0.3);
    CHECK_EQ(team4->teamtalent, 0.4);
    CHECK_EQ(team5->teamtalent, 0.5);
    CHECK_EQ(team6->teamtalent, 0.6);
    CHECK_EQ(team7->teamtalent, 0.7);
    CHECK_EQ(team8->teamtalent, 0.8);
    CHECK_EQ(team9->teamtalent, 0.9);
    

    Game* firstGame = new Game(team1, team2);
    //cout<<firstGame->in->nickname<<endl; // first

    CHECK_EQ(firstGame->in->nickname, "first");
    CHECK_EQ(firstGame->out->nickname, "second");

    // delete
    delete team1;
    delete team2;
    delete team3;
    delete team4;
    delete team5;
    delete team6;
    delete team7;
    delete team8;
    delete team9;
}