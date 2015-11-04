#include "Quest.h"

// Quest default constructor
Quest::Quest() {
  complete = false;
  experience = 0;
}

// GETTERS 'n' SETTERS
std::string Quest::getQuestName() {
  return questName;
}
std::string Quest::getQuestDescription() {
  return questDescription;
}
void Quest::setQuestName(std::string name) {
  questName = name;
}
void Quest::setQuestDescription(std::string description) {
  questDescription = description;
}
std::vector<Objective> Quest::getObjectives() {
  return objectives;
}

// Add objective to quest.
void Quest::addObjective(std::string name) {
  Objective objective;
  objective.complete = false;
  objective.name = name;
  objectives.push_back(objective);
}

// Mark objective with ID id and check if the quest is completed.
void Quest::completeObjective(int id) {
  int _completed = 0;
  for(int i=0; i<objectives.size(); i++) {
    if(id == i)
      objectives[i].complete = true;
    if(objectives[i].complete)
      _completed++;
  }
  if(_completed == objectives.size())
    complete = true;
  progress = _completed;
}

int Quest::getProgress() {
  return (int) (((double)progress / (double)(objectives.size())) * 100);
}

bool Quest::isCompleted() {
  return complete;
}
