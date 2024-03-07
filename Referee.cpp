#include "Referee.h"

using namespace std;

Player* Referee::refGame(Player* player1, Player* player2) {
  Move* move1 = player1->makeMove();
  Move* move2 = player1->makeMove();

  if (move1->willLose(move2->getName())) return player2;
  else if (move2->willLose(move1->getName())) return player1;
  else return nullptr;
}