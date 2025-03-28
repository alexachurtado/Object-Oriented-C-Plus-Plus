#include <iostream>
#include <stdio.h>
#include "Charmander.h"

using namespace std;

// Default Constructor
Charmander::Charmander() : Pokemon() {
    type.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "Default Constructor (Charmander)\n";
}

// Overloaded Constructor
Charmander::Charmander(string name, int hp, int attack, int defense, vector<string> type, vector<string> skills)
    : Pokemon(name, hp, attack, defense, type) { 
    this->type = type;
    this->skills = skills;

    cout << "Overloaded Constructor (Charmander)\n";
}

// Override speaks function
void Charmander::speaks() { 
    cout << "Charmander - char\n";
}

// Override printStats function
void Charmander::printStats() {
   Pokemon::printStats(); // commented out gives u only printStats of charmander
    cout << "Skills: ";
    for (int i = 0; i < type.size(); i++) { 
        cout << type[i] << "\t";
    }
    cout << endl;
}
