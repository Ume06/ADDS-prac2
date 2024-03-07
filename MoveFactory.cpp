#include "MoveFactory.h"
#include "./moves/pirate.h"
using namespace std;

moveFactory::moveFactory(map<string, int> possibleMoves) {
  moves = possibleMoves;
}

Move* moveFactory::getMove(string move) {
  int moveInt = moves[move];

  switch(moveInt) {
    case 1: return new Pirate;
    case 2: 
  }
}