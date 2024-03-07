#include "Move.h"
#ifndef ROCK_H
#define ROCK_H

using namespace std;

class Rock : public Move {
  private:
    vector<string> defeats;
    string moveName;
};

#endif;