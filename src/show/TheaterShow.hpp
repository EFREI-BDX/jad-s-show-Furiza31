#ifndef THEATERSHOW_HPP
#define THEATERSHOW_HPP

#include <string>
#include <vector>

#include "Show.hpp"

namespace show {
class TheaterShow : public Show {
 private:
  std::string director;
  std::vector<std::string> actors;

 public:
  TheaterShow(std::string name, std::string description, std::string director,
              std::vector<std::string> actors);

  [[nodiscard]] std::string getDirector() const { return this->director; }
  [[nodiscard]] std::vector<std::string> getActors() const {
    return this->actors;
  }

  ~TheaterShow() = default;
};
}  // namespace show

#endif