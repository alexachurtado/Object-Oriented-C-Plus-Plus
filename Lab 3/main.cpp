#include "rpg.h" 
#include <iostream>

using namespace std;

int main() {
  
    RPG npc = RPG();
    RPG mage = RPG("Wiz", 10, 10, 10, "mage");


    printf("%s health: %i\n", npc.getName(), npc.getHealth());
    printf("%s health: %i\n", mage.getName(), mage.getHealth());


      printf("Skill 0: %s\nSkill 1: %s\n", "fire", "thunder");  

        // Ask the player to choose a skill
        int skillChoice;
        cout << "Choose a skill to use: Enter 0 or 1" << endl;
        cin >> skillChoice;

        // Validate skill choice and execute
        if (skillChoice == 0 || skillChoice == 1) {
            mage.useSkill(&npc, to_string(skillChoice)); 
            mage.attack(&npc); 
        } else {
            cout << "Invalid choice, using default attack!" << endl;       
        }
    
    
    return 0;
}