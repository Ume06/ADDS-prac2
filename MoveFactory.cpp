#include "MoveFactory.h"
#include <algorithm>
using namespace std;

moveFactory::moveFactory(vector<string> possibleMoves) {
  moves = possibleMoves;
}

Move* moveFactory::getMove(string move) {
  int moveInt = find(moves.begin(), moves.end(), move);
}