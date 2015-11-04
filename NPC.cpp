#include "NPC.h"

// NPC Constructor
NPC::NPC() {
  attacks.reserve(MAX_ATTACKS);
  attacks.push_back(Attack("Flying Fuck", 12, 30, 2));
  attacks.push_back(Attack("Dive Bomb", 30, 5, 1));
  attacks.push_back(Attack("Back Stab", 8, 20, 1));
}


//
// If you can't guess what thes do you shouldn't be reading the code.
// GETTERS 'N' SETTERS
//
std::string NPC::getName() {
  return name;
}
void NPC::setName(std::string newName) {
  name = newName;
}
int NPC::getHealth() {
  return health;
}
int NPC::getArmor() {
  return armor;
}
int NPC::getExperience() {
  return experience;
}
int NPC::getLevel() {
  return level;
}

// Display attacks
void NPC::showAttacks() {
  std::cout << "Attacks:" << std::endl;
  for(auto &attack : attacks) {
    std::cout << attack.name << "\t [DM:" << std::setw(4) << attack.damage << " | AP:" << std::setw(4) << attack.attackPower << "]" << std::endl;
  }
  std::cout << std::endl;
}

/*

double levelCalculation = (1 + (0.2 * _level));
experience = (int)pow(16,  levelCalculation);
level = (int)(experience % (int)levelCalculation);

*/
