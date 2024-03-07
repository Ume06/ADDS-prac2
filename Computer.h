#ifndef COMPUTER_H // include guard
#define COMPUTER_H
#include <iostream>
#include "Player.h"

using namespace std;

class Computer : public Player{
  public:
    Move* makeMove();
    Computer();
  private:
    string name;
};

#endif