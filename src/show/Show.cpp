#include "Show.hpp"

using namespace show;

Show::Show(std::string name, std::string description, ShowType type) {
  this->name = name;
  this->description = description;
  this->type = type;
}