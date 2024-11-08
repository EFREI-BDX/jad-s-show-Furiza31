#include "Show.hpp"

using namespace show;

Show::Show(std::string name, std::string description, const ShowType *type) {
  this->name = std::move(name);
  this->description = std::move(description);
  this->type = type;
}