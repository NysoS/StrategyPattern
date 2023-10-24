#include "Character/Warrior.h"
#include "Character/Wizzard.h"
#include "Character/Thief.h"
#include "Strategy/IFightStrategy.h"
#include "Strategy/DaggerFightStrategy.h"
#include "Strategy/SwordFightStrategy.h"

#include <iostream>

int main()
{
    IFightStrategy* SwordStrategy = new SwordFightStrategy();
    IFightStrategy* DaggerStrategy = new DaggerFightStrategy();

    Warrior* Warrior1 = new Warrior("Bob");
    Wizzard* Wizzard1 = new Wizzard("Merlin");
    
    std::cout << Warrior1->GetName() << std::endl;
    Warrior1->Fight();
    Warrior1->SetStrategy(SwordStrategy);
    Warrior1->Fight();
    Warrior1->SetStrategy(DaggerStrategy);
    Warrior1->Fight();

    std::cout << Wizzard1->GetName() << std::endl;
    Wizzard1->Health();
    Wizzard1->Fight();
   
    delete Warrior1;
    delete Wizzard1;

    delete SwordStrategy;
    delete DaggerStrategy;
}