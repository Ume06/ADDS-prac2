#include "Move.h"
#ifndef ZOMBIE_H
#define ZOMBIE_H

using namespace std;

class Zombie : public Move {
  private:
    vector<string> defeats;
    string moveName;
};

#endif;