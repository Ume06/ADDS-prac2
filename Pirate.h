#include "Move.h"
#ifndef PIRATE_H
#define PIRATE_H

using namespace std;

class Pirate : public Move {
  private:
    vector<string> defeats;
    string moveName;
};

#endif;