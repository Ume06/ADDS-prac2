#include <string>
#include <vector>
#ifndef MOVE_H
#define MOVE_H

using namespace std;

class Move {
  public:
    // return move name
    virtual string getName();
    // return vector<string> of moves that lose this move
    virtual vector<string> strongerThan();
};

#endif;