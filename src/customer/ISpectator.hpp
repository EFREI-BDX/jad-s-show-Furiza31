#ifndef ISPACTATOR_HPP
#define ISPACTATOR_HPP

#include <string>

#include "IShow.hpp"

namespace customer {
class ISpectator {
 public:
  virtual std::string getFirstName() = 0;
  virtual std::string getLastName() = 0;
  virtual void watch(IShow* show) = 0;
};
}  // namespace customer

#endif