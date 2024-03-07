#include "Computer.h"
#include "Move.h"
#include "MoveFactory.h"

using namespace std;

Computer::Computer() {
  name = "Computer";
}

Move* Computer::makeMove() {
  string move = "Rock";
  moveFactory moveGetter = moveFactory();
  return moveGetter.getMove(move);
}