#include "rpg.h"
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

void RPG::printAction(string skill, RPG * user) {
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), (*user).getName().c_str());
}

// Update health after attack or skill use
void RPG::updateHealth(int new_health) {
    health = new_health;
}

// Attack another player (pass by reference)
void RPG::attack(RPG * user) {
    int damage = strength - (*user).getDefense();
    if (damage < 0) {
        damage = 0;  // No negative damage
    }
    (*user).updateHealth((*user).getHealth() - damage);
    printAction("attack", user);  // Display action taken
}

// Use a skill on another player (pass by reference)
void RPG::useSkill(RPG * user, string skill) {
    int damage = strength - (*user).getDefense();  // Adjust damage calculation if needed for skills
    if (damage < 0) {
        damage = 0;
    }
    (*user).updateHealth((*user).getHealth() - damage);
    printAction(skill, user);  // Display action taken
}








