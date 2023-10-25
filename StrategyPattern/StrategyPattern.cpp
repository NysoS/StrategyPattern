#include "Character/Warrior.h"
#include "Character/Wizzard.h"
#include "Character/Thief.h"
#include "Strategy/IFightStrategy.h"
#include "Strategy/DaggerFightStrategy.h"
#include "Strategy/SwordFightStrategy.h"
#include "Strategy/IHealtherStrategy.h"
#include "Strategy/HealthSelfStrategy.h"
#include "Strategy/HealthTeamStrategy.h"

#include <iostream>

int main()
{
    IFightStrategy* SwordStrategy = new SwordFightStrategy();
    IFightStrategy* DaggerStrategy = new DaggerFightStrategy();

    IHealtherStrategy* SelfHealtStrategy = new HealthSelfStrategy();
    IHealtherStrategy* TeamHealtStrategy = new HealthTeamStrategy();

    Warrior* Warrior1 = new Warrior("Bob");
    Wizzard* Wizzard1 = new Wizzard("Merlin");
    Thief* Thief1 = new Thief("Jean");
    
    std::cout << "Warrior : " << Warrior1->GetName() << std::endl;
    Warrior1->Fight();
    Warrior1->SetFightStrategy(SwordStrategy);
    Warrior1->Fight();
    Warrior1->SetFightStrategy(DaggerStrategy);
    Warrior1->Fight();

    std::cout << "----------------------------------------\n";

    std::cout << "Wizzard : "<< Wizzard1->GetName() << std::endl;
    Wizzard1->SetHealthStrategy(TeamHealtStrategy);
    Wizzard1->Health();
    Wizzard1->Fight();

    std::cout << "----------------------------------------\n";

    std::cout << "Thief : " << Thief1->GetName() << std::endl;
    Thief1->SetFightStrategy(DaggerStrategy);
    Thief1->SetHealthStrategy(SelfHealtStrategy);
    Thief1->Fight();
    Thief1->Health();
   
    delete Warrior1;
    delete Wizzard1;
    delete Thief1;

    delete SelfHealtStrategy;
    delete TeamHealtStrategy;

    delete SwordStrategy;
    delete DaggerStrategy;
}