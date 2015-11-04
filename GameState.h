#pragma once

#include <ctime>
#include <vector>
#include <string>

#include "Location.h"
#include "Quest.h"

class GameState {
 public:
  GameState();

  Location getLocation();
  std::string getLocationName();
  void setLocation(std::string);
  void setLocation(int);

  void addQuest(Quest);
  std::vector<Quest> getQuests();

  std::time_t getCurrentTime();

 private:
  Location location; // currentLocation object.

  std::vector<Quest> questLog; // All quests accepted.

  std::time_t currenTime(); // Current time used to compute play time.
};
