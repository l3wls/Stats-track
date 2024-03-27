// This is where the players class and it's method will be at.

#include <string>
using namespace std;

class Players {
    string name;
    string team;
    int age;

public:
    Players(string player_name, string player_team, int age);
    ~Players();

    void set_age(int new_age);
    void set_name(string new_player);
    void set_team(string new_team);

    string get_name();
    string get_team();
    int get_age();
};
