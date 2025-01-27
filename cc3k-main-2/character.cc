#include "character.h"

Character::Character( int HP, int Atk, int Def, int gold, 
                      int row, int col, std::string race ) :
  HP{HP}, Atk{Atk}, Def{Def}, gold{gold}, row{row}, col{col}, race{race} { }

std::string Character::getRace() const {
  return race;
}

int Character::getRow() const {
  return row;
}

int Character::getCol() const {
  return col;
}

int Character::getHP() const {
  return HP;
}

int Character::getAtk() const {
  return Atk;
}

int Character::getDef() const {
  return Def;
}

int Character::getGold() const {
  return gold;
}

void Character::updatePos(int x, int y) {
  row = x;
  col = y;
}
