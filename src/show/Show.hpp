#ifndef SHOW_HPP
#define SHOW_HPP

#include <string>

#include "IShow.hpp"
#include "ShowType.hpp"

namespace show {
class Show : public IShow {
 private:
  std::string name;
  std::string description;
  ShowType type;

 public:
  Show(std::string name, std::string description, ShowType type);
  ~Show() = default;

  [[nodiscard]] std::string getName() const override { return this.name; }
  [[nodiscard]] std::string getDescription() const override {
    return this.description;
  }
  [[nodiscard]] ShowType* getType() const override { return &this.type; }
};

}  // namespace show

#endif