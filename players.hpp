// This is where the players class and it's method will be at.

#include <string>

class Players {
    string player;
    string team;
    int age;

public:
    Players(string player_name, string player_team, int age);
    ~Players();

    void set_age(int new_age);
    void set_player(string new_player);
    void set_team(string new_team);

    string get_player();
    string get_team();
    int get_age();
};
