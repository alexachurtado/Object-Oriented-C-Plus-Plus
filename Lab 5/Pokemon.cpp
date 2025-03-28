#include <iostream>
#include "Pokemon.h"
#include <string>

using namespace std;

// Default constructor
Pokemon::Pokemon() : name(" "), hp(0), attack(0), defense(0), type({}) {
    cout << "Default Constructor (Pokemon)\n";
}

// Overloaded constructor
Pokemon::Pokemon(string name, int hp, int attack, int defense, vector<string> type)
    : name(name), hp(hp), attack(attack), defense(defense), type(type) {
    cout << "Overloaded Constructor (Pokemon)\n";
}

// Speaks function
void Pokemon::speaks() {
    cout << "...\n";
}

// Print stats function
void Pokemon::printStats() {
    printf("Name: %s\t HP: %i DEF: %i\t ATT: %i\n", name.c_str(), hp, defense, attack);
    
    cout << "Type: ";
    for (int i = 0; i < type.size(); i++) {  
        cout << type[i] << "\t";
    }
    cout << endl;
}
