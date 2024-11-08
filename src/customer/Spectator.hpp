#ifndef SPECATATOR_HPP
#define SPECATATOR_HPP

#include <string>

#include "ISpectator.hpp"

namespace customer {
class Spectator : public ISpectator {
 private:
  std::string firstName;
  std::string lastName;

 public:
  Spectator(std::string firstName, std::string lastName);

  [[nodiscard]] std::string getFirstName() override { return this.firstName; }
  [[nodiscard]] std::string getLastName() override { return this.lastName; }
  void watch(IShow* show) override;

  ~Spectator() = default
};

Spectator::Spectator(/* args */) {}

Spectator::~Spectator() {}

}  // namespace customer

#endif