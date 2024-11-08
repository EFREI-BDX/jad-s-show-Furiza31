#ifndef STREETSHOW_HPP
#define STREETSHOW_HPP

#include <string>
#include <vector>

#include "Show.hpp"

namespace show {
class StreetShow : public Show {
 private:
  std::vector<std::string> performers;

 public:
  StreetShow(std::string name, std::string description,
             std::vector<std::string> performers);

  [[nodiscard]] std::vector<std::string> getPerformers() const {
    return this->performers;
  }

  ~StreetShow() = default;
};

}  // namespace show

#endif