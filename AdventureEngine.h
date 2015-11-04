#pragma once

#include <ctime>

#include "NPC.h"
#include "Player.h"
#include "GameState.h"

class AdventureEngine {
 public:
  AdventureEngine(); // Initialize the game object.
  ~AdventureEngine();
  GameState* getGameState(); // Return a pointer to the current game state.
  Player* getPlayer(); // Return a pointer to the player object.
  std::time_t getPlayedTime(); // Return the elapsed gameplay time of the file. 
  bool saveGame(); // Save a game to a current unspecified format.
  bool loadGame(); // Load a saved game from a current unspecified format.
 private:
  Player* player;
  GameState *currentGameState;
};
