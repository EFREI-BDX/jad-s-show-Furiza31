#include "Spectator.hpp"

using namespace customer;
using namespace show;

#include <iostream>

Spectator::Spectator(std::string firstName, std::string lastName) {
  this->firstName = firstName;
  this->lastName = lastName;
}

void Spectator::watch(IShow* show) {
  std::cout << this->getFirstName() << " " << this->getLastName()
            << " is watching" << std::endl;
  std::cout << show->getName() << std::endl;
  std::cout << show->getDescription() << std::endl;
  std::cout << show->getType() << std::endl;
}