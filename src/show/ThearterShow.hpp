#ifndef THEARTERSHOW_HPP
#define THEARTERSHOW_HPP

#include <string>
#include <vector>

#include "Show.hpp"

namespace show {
class ThearterShow : public Show {
 private:
  std::string director;
  std::vector<std::string> actors;

 public:
  ThearterShow(std::string name, std::string description, std::string director,
               std::vector<std::string> actors);

  [[nodiscard]] std::string getDirector() const { return this.director; }
  [[nodiscard]] std::vector<std::string> getActors() const {
    return this.actors;
  }

  ~ThearterShow() = default
};
}  // namespace show

#endif