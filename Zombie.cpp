#include "Zombie.h"
#include <vector>

using namespace std;

Zombie::Zombie() {
  loses.push_back("Robot");
  loses.push_back("Ninja");

  name = "Zombie";
}