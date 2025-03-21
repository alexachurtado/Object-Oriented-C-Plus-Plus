#include "RPG.h" 
#include <iostream>

using namespace std;

void displayStats(RPG player1, RPG player2) {
    printf("%s health: %i\n%s health: %i\n", 
        player1.getName().c_str(), player1.getHealth(), 
        player2.getName().c_str(), player2.getHealth());
}

void gameLoop(RPG* player1, RPG* player2) {
    while (player1->isAlive() && player2->isAlive()) {

        displayStats(*player1, *player2);

        printf("%s's turn\n", player1->getName().c_str());
        player1->useSkill(player2);
        cout << "-------------------------" << endl;

        displayStats(*player1, *player2);

        printf("%s's turn\n", player2->getName().c_str());
        player2->useSkill(player1);
        cout << "-------------------------" << endl;

    }
}

void displayEnd(RPG player1, RPG player2) {

    if (player1.isAlive()) {

        printf("%s won!! Good job\n", player1.getName().c_str());
    } else {
        printf("%s won!! Good job\n", player2.getName().c_str());
    }
}

int main() {
    // Create player objects
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    // Start game loop and display results
    gameLoop(&p1, &p2);
    displayEnd(p1, p2);

    return 0;
}
