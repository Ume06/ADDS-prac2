#include <string>
#include <map>
#ifndef MOVE_H
#define MOVE_H

using namespace std;

class Move {
  public:
    // return move name
    virtual string getName();
    // return vector<string> of moves that lose this move
    virtual bool willLose(string);
    // list of moves a Player can make
  private:
    vector <string> loses;
};

#endif;