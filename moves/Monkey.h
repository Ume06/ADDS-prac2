#include "../Move.h"
#ifndef MONKEY_H
#define MONKEY_H

using namespace std;

class Monkey : public Move {
  private:
    vector<string> defeats;
    string moveName;
};

#endif;