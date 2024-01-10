// Players functions defintions will called upon here
#include <iostream>
#include "players.hpp"

Players::Players(string player_name, string player_team, int ageX)
    : player(player_name), team(player_team), age(ageX){}

string get_player()
{
    return player;
}

string get_team()
{
    return team;
}

int get()
{
    return age;
}