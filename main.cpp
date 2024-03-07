#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"
#include <string>

int main() {
  Player *player1 = new Human("Jack");
  Player *CPU1 = new Computer();

  Referee ref;

  Player* winner = ref.refGame(player1, CPU1);
  if (winner) cout << winner->getName() << " Wins" << endl;
  else cout << "It's a Tie" << endl;
  return 0;
}
