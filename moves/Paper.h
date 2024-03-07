#include "../Move.h"
#ifndef PAPER_H
#define PAPER_H

using namespace std;

class Pirate : public Move {
  private:
    vector<string> defeats;
    string moveName;
};

#endif;