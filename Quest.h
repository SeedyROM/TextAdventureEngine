#pragma once

#include <iostream>
#include <string>
#include <vector>

// Objective class used to track quest progress
class Objective {
 public:
  bool complete;
  std::string name;
};

// Quest object, stores important adventure information
class Quest {
 public:
  Quest();
  std::string getQuestName();
  void setQuestName(std::string);
  
  std::string getQuestDescription();
  void setQuestDescription(std::string);
  
  void addObjective(std::string);
  std::vector<Objective> getObjectives();
  void completeObjective(int); // Mark objective with id and check if the quest is completed.
  bool isCompleted();
  int getProgress();
  int experience;

 private:
  bool complete; // Is the quest complete?
  int progress;
  std::string questName; 
  std::string questDescription;
  std::vector<Objective> objectives;
};
