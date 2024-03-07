#ifndef MOVE_FACTORY_H
#define MOVE_FACTORY_H
#include "Move.h"
#include <map>

using namespace std;

class moveFactory {
  public:
    moveFactory(map<string, int> possibleNames);
    //take in string and return subclass of move
    Move* getMove(string moveName);
  private:
    map<string, int> moves;
};

#endif