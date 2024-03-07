#include "Move.h"
#ifndef ROBOT_H
#define ROBOT_H

using namespace std;

class Robot : public Move {
  private:
    vector<string> defeats;
    string moveName;
};

#endif;