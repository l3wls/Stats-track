// Players functions defintions will called upon here
#include <iostream>
#include "players.hpp"

Players::Players(string player_name, string player_team, int ageX)
    : player(player_name), team(player_team), age(ageX){}

void Players::set_player(string new_player)
{
    player = new_player;
}

void Players::set_team(string new_team)
{
    team = new_team;
}

void Players::set_age(int age)
{
    this-> age = age;
}

string Players::get_player()
{
    return player;
}

string Players::get_team()
{
    return team;
}

int Players::get_age()
{
    return age;
}