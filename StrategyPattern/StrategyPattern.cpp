#include "Character/Warrior.h"
#include "Character/Wizzard.h"
#include "Character/Thief.h"

#include <iostream>

int main()
{
    Warrior* Warrior1 = new Warrior("Bob");
    Wizzard* Wizzard1 = new Wizzard("Merlin");
    
    Warrior1->Fight();
    std::cout << Warrior1->GetName() << std::endl;
    Wizzard1->Health();
    std::cout << Wizzard1->GetName() << std::endl;


    delete Warrior1;
    delete Wizzard1;
}