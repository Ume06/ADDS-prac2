#ifndef PLAYER_H // include guard
#define PLAYER_H
#include <iostream>
#include "Move.h"

using namespace::std;

class Player {
  public:
    // uses MoveFactory to return a move object after input
    virtual Move* makeMove()=0;
    string getName(); 
    map<string, Move*> possibleMoves;
  private:
    string name;
};

#endif