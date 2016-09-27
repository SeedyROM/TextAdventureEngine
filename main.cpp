#include <iostream>
#include <cstdlib>

#include "AdventureEngine.h"

int main(int argc, char* argv[])
{
  // Display version and info about build.

  std::cout << "\n\n\n Text Adventure 0.0.1a : Build 0 \n\n\n" << std::endl;

  AdventureEngine *game = new AdventureEngine();
 
  // Player Info Test

  std::cout << "Health   : " << game->getPlayer()->getHealth() << std::endl;
  std::cout << "Location : " << game->getGameState()->getLocationName() << std::endl;
  std::cout << std::endl;
  
  // Quest Log Test

  Quest quest;
  quest.setQuestName("Hell is here!");
  quest.setQuestDescription("You basically die and you suck.");
  quest.completeObjective(0);

  game->getGameState()->addQuest(quest);

  quest = Quest();
  quest.setQuestName("HAHAHAH");
  quest.setQuestDescription("In the name of all great liar’s improvise in Kauffman style.");
  quest.addObjective("Play the guitar!");
  quest.addObjective("hjkhjjk");
  quest.addObjective("Die.");
  quest.completeObjective(0);
  quest.completeObjective(2);

  game->getGameState()->addQuest(quest);

  // NPC Testing

  game->getPlayer()->showAttacks();

  // Quest Menu Test

  std::cout << "QUESTS:\n" << std::endl;
  // Get all quests for the user to view.
  for(auto &currentQuest : game->getGameState()->getQuests()) {
    std::cout << currentQuest.getQuestName();
    std::cout << " [" <<  currentQuest.getProgress() << "%] |";
    if(currentQuest.isCompleted())
      std::cout << " [Completed]" << std::endl;
    else
      std::cout << " [Not Completed]" << std::endl;

    std::cout << "\t    \"" << currentQuest.getQuestDescription() << "\"" << std::endl;
    // Get all objectives and display if they're complete or not.
    for(auto &objective : currentQuest.getObjectives()) {
      if(!objective.complete)
	std::cout << "\t    [ ] ";
      else
	std::cout << "\t    [x] ";

      std::cout << objective.name << std::endl;
    }
    std::cout << std::endl;
  }
  return EXIT_SUCCESS;
}
