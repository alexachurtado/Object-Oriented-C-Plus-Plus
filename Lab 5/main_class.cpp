#include <iostream>
#include "Charmander.h"

using namespace std;

int main(){
    //Charmander first = Charmander();
    vector<string> pokemonType;

    pokemonType.push_back("Fire");

    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "-------Constructor Created --------/n";
    Charmander charlie = Charmander("Charlie", 100, 4, 4 , pokemonType, skills);
    //Charmander
    
    cout << "\n ----------Direct Speak---------\n";
    charlie.speaks();

    //Pokemon pointer
    Pokemon * p1 = &charlie;

    cout <<"\n-------- Speak called from Pokemon Pointer--------\n";

    (*p1).speaks();

    // Charmander point

    Charmander * c1 = &charlie;
    cout <<"\n-------- Speak called from Charmander pointer------\n";

    (*c1).speaks();

    cout << "\n-------Print Stats---------\n";
    charlie.printStats();

}