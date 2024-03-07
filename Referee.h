#ifndef REFEREE_H // include guard
#define REFEREE_H
#include "Player.h"
#include "Move.h"
#include <map>
class Referee {
  public:
    Player* refGame(Player* player1, Player* player2);

  private:
    Move* getWinner(Move* move1, Move* move2);
    map<string, Move*> legalMoves;
};

#endif