#include "RPG.h"
#include <string>
#include <iostream>

using namespace std;

// Default constructor
RPG::RPG() {
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
    setSkills();  
}

// Overload
RPG::RPG(string name, int health, int strength, int defense, string type) {
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
    setSkills();  // Set skills based on type
}


void RPG::setSkills() {
    if (type == "mage") {
        skills[0] = "fire";
        skills[1] = "thunder";
    }
    else if (type == "thief") {
        skills[0] = "jab";
        skills[1] = "pilfer";
    }
    else if (type == "archer") {
        skills[0] = "parry";
        skills[1] = "crossbow attack";
    }
    else {  // Default skills for warrior or other types
        skills[0] = "slash";
        skills[1] = "parry";
    }
}

// Accessors
string RPG::getName() const {
    return name;
}

int RPG::getHealth() const {
    return health;
}

int RPG::getStrength() const {
    return strength;
}

int RPG::getDefense() const {
    return defense;
}

bool RPG::isAlive(){
    return health > 0;
}

void RPG::printAction(string skill, RPG * opponent) {
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), (*opponent).getName().c_str());
}

// Update health after attack or skill use
void RPG::updateHealth(int new_health) {
    health = new_health;
}

// Attack another player (pass by reference)
void RPG::attack(RPG * opponent) {
    int damage = strength - (*opponent).getDefense();
    if (damage < 1) {
        damage = 1;  // No negative damage
    }

    int newHealth = (*opponent).getHealth() - damage;
    if (newHealth < 0) {
        newHealth = 0;  // No negative damage
    }

    (*opponent).updateHealth(newHealth);
    printAction("attack", opponent);  // Display action taken
}

// Use a skill on another player (pass by reference)
void RPG::useSkill(RPG * opponent) {

    for(int i = 0; i < SKILL_SIZE; i++){
        printf("Skill %i: %s\n", i, skills[i].c_str());
    }

    // Ask the player to choose a skill
    int skillChoiceindex;
    cout << "Choose a skill to use: Enter 0 or 1" << endl;
    cin >> skillChoiceindex;

    string skillChoice = skills[skillChoiceindex];

    printAction(skillChoice, opponent);  // Display action taken

    attack(opponent);
}

//learned that c_str is used for only printf statements







