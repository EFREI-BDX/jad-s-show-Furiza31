#ifndef ISHOW_HPP
#define ISHOW_HPP

#include <string>

#include "ShowType.hpp"

namespace show {
class IShow {
 public:
  virtual std::string getName() const = 0;

  virtual std::string getDescription() const = 0;

  virtual const ShowType* getType() const = 0;
};
}  // namespace show

#endif