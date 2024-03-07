#include <string>
#include <map>
#ifndef MOVE_H
#define MOVE_H

using namespace std;

class Move {
  public:
    // return move name
    string getName();
    // return vector<string> of moves that lose this move
    bool willLose(string move);
    // list of moves this move loses to
    vector<string> loses;
    // name
    string name;
};

#endif;