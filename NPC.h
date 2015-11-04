#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>

// An encapsulation for a NPC attack, it can be used on other NPCs.
class Attack {
 public:
  std::string name;
  int damage;
  int attackPower;
  int level;
  int experience;

  // Attack constructor for easy creation of new attacks!
  Attack(std::string _name, int _damage, int _attackPower, int _level) {
    name   = _name;
    damage = (int)(_damage / (_level)); // Little weird math to scale the levels and damage according to experience.
    attackPower = _attackPower; // etc.
    experience = ( 32 * _level ); // etc.
    level = (experience % (32 * _level)) + 1; // etc
  }
};

// Lil tweaky macros.
#define MAX_ATTACKS 6

// NPC Base Class
class NPC {
 public:
  NPC();
  std::string getName();
  void setName(std::string);
  void setHealth(int);
  int getHealth();
  int getArmor();
  int getExperience();
  int getLevel();

  void showAttacks();
 protected:
  std::string name;
  int health;
  int armor;
  std::vector<Attack> attacks;
  int experience;
  int level;
};
