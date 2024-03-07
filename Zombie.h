#include "Move.h"
#ifndef ZOMBIE_H
#define ZOMBIE_H

using namespace std;

class Zombie : public Move {
  public:
    Zombie();
  private:
    vector <string> loses;
};

#endif;