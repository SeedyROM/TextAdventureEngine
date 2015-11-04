#include "GameState.h"

// Initial blank game constructor.
// TODO: Load from save file.
GameState::GameState() {
  this->location = LocationsList->find(0);
}

// Set the location based on an ID or locationName.
void GameState::setLocation(std::string query) {
  this->location = LocationsList->find(query);
}
void GameState::setLocation(int query) {
  this->location = LocationsList->find(query);
}

// GETTERS 'n' SETTERS
Location GameState::getLocation() {
  return this->location;
}
std::string GameState::getLocationName() {
  return this->location.name;
}

void GameState::addQuest(Quest q) {
  this->questLog.push_back(q);
}
std::vector<Quest> GameState::getQuests() {
  return this->questLog;
}
