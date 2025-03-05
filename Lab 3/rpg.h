//
#define RPG_H
#include <string>

using namespace std;

const int SKILL_SIZE = 2;

class RPG {
    public:
    //constructors
    RPG();
    RPG(string name, int health, int strength, int defense, string type);

    //Accesrr/ getters information
    string getName() const;
    int getHealth() const;
    int getStrength() const;
    int getDefense() const;
    bool isAlive();

    //Mutators/ setters/ updaters
    void setSkills();
    void printAction(string type, RPG * user);
    void updateHealth(int health);
    void attack(RPG * user);
    void useSkill(RPG * user, string skills);

    private:
    string name;
    int health;
    int strength;
    int defense;
    string type; //warrior, thief, archer
    string skills[SKILL_SIZE];

};

