#ifndef HUMAN_H // include guard
#define HUMAN_H
#include <iostream>
#include "Player.h"

using namespace std;

class Human : public Player{
  public:
    Move* makeMove();
    Human(string x);
    Human();
};

#endif