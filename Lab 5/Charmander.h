#ifndef CHARMANDER_H
#define CHARMANDER_H

#include <string>
#include <vector>
#include "Pokemon.h"

using namespace std;

class Charmander : public Pokemon {
public:
    // Default constructor
    Charmander();

    // Overloaded constructor
    Charmander(string name, int hp, int attack, int defense, vector<string> type, vector<string> skills);

    // Override functions
    void speaks() override; //take out override and virtual on speaks and you get static overload , points to pokemon
    void printStats() override;

private:
    vector<string> skills;
};

#endif
