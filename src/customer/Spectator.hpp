#ifndef SPECATATOR_HPP
#define SPECATATOR_HPP

#include <string>

#include "ISpectator.hpp"
#include "show/IShow.hpp"

using namespace show;

namespace customer {
class Spectator : public ISpectator {
 private:
  std::string firstName;
  std::string lastName;

 public:
  Spectator(std::string firstName, std::string lastName);

  [[nodiscard]] std::string getFirstName() override { return this->firstName; }
  [[nodiscard]] std::string getLastName() override { return this->lastName; }
  void watch(IShow* show) override;

  ~Spectator() = default;
};
}  // namespace customer

#endif