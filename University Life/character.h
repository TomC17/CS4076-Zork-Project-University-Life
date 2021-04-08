#ifndef CHARACTER_H
#define CHARACTER_H
#include "person.h"

class Character : public Person {
public:
  Character(string name) : Person(name) { this->name = name; }
  void levelUp();
};

#endif // CHARACTER_H
