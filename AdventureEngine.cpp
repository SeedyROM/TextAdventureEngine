#include "AdventureEngine.h"

// Engine constructor.
AdventureEngine::AdventureEngine() {
  // NOT IMPLEMENTED
  // LOAD FROM LAST SAVE FILE HERE
  
  player = new Player();
  currentGameState = new GameState();
}
// Engine desconstructor.
AdventureEngine::~AdventureEngine() {
  delete player;
  delete currentGameState;
}

// GETTERS 'n' SETTER
Player *AdventureEngine::getPlayer() {
  return player;
}
GameState *AdventureEngine::getGameState() {
  return currentGameState;
}
