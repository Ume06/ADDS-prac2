#include "Human.h"
#include "Move.h"
#include "MoveFactory.h"

using namespace std;

Human::Human(string x) {
  Human::name = x;
}

Human::Human() {
  Human::name = "Human";
}

Move* Human::makeMove() {
  string move;
  cout << "Enter move: ";
  cin >> move;
  moveFactory y;
  return y.getMove(move);
}