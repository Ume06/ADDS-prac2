#ifndef MOVE_FACTORY_H
#define MOVE_FACTORY_H
#include "Move.h"

using namespace std;

class moveFactory {
  public:
    moveFactory(vector<string> possibleNames);
    //take in string and return subclass of move
    Move* getMove(string moveName);
  private:
    vector<string> moves;
};

#endif