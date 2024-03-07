#include "MoveFactory.h"
#include "./moves/Monkey.h"
#include "./moves/Robot.h"
#include "./moves/Pirate.h"
#include "./moves/Ninja.h"
#include "./moves/Zombie.h"
#include "./moves/Rock.h"
#include "./moves/Paper.h"
#include "./moves/Scissors.h"

using namespace std;

moveFactory::moveFactory() {
  possibleMoves["Monkey"] = new Monkey;
  possibleMoves["Robot"] = new Robot;
  possibleMoves["Pirate"] = new Pirate;
  possibleMoves["Ninja"] = new Ninja;
  possibleMoves["Zombie"] = new Zombie;
  possibleMoves["Rock"] = new Rock;
  possibleMoves["Paper"] = new Paper;
  possibleMoves["Scissors"] = new Scissors;
}

Move* moveFactory::getMove(string move) {
  return possibleMoves[move];
}

