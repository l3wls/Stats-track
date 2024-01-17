// Players functions defintions will called upon here
#include <iostream>
#include "players.hpp"

Players::Players(string player_name, string player_team, int ageX)
    : name(player_name), team(player_team), age(ageX){}

Players::~Players()
{
    cout << "Goodbye";
}
void Players::set_name(string new_name)
{
    name = new_name;
}

void Players::set_team(string new_team)
{
    team = new_team;
}

void Players::set_age(int age)
{
    this-> age = age;
}

string Players::get_name()
{
    return name;
}

string Players::get_team()
{
    return team;
}

int Players::get_age()
{
    return age;
}