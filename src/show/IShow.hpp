#ifndef ISHOW_HPP
#define ISHOW_HPP

#include <string>

#include "ShowType.hpp"

namespace show {
class IShow {
 public:
  virtual std::string getName() = 0;

  virtual std::string getDescritpion() = 0;

  virtual ShowType* getType() = 0;
};
}  // namespace show

#endif