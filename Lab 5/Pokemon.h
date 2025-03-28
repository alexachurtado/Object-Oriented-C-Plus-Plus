#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <vector>

using namespace std;

class Pokemon {
public:
    // Default constructor
    Pokemon();

    // Overloaded constructor
    Pokemon(string name, int hp, int attack, int defense, vector<string> type);

    // Virtual functions
    virtual void speaks();
    virtual void printStats();

protected: //made into private and got runtime error?
    string name;
    int hp;
    int attack;
    int defense;
    vector<string> type;
};

#endif
