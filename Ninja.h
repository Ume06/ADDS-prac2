#include "../Move.h"
#ifndef NINJA_H
#define NINJA_H

using namespace std;

class Ninja : public Move {
  private:
    vector<string> defeats;
    string moveName;
};

#endif;