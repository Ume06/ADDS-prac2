#include "MoveFactory.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include <map>
#include <string>

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

