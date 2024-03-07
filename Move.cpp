#include "Move.h"

using namespace std;

string Move::getName() {
  return name;
}

bool Move::willLose(string move) {
  for (int i = 0; i < loses.size(); i++) {
    if (loses.at(i) == move) return true;
  }
  return false;
}