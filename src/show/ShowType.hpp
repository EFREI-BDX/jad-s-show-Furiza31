#ifndef SHOWTYPE_HPP
#define SHOWTYPE_HPP

#include <string>

namespace show {
class ShowType {
 private:
  std::string name;
  ShowType(const std::string &name);
  ~ShowType() = default;

 public:
  static const ShowType MOVIE;
  static const ShowType STREET_SHOW;
  static const ShowType THEATER;
  static const ShowType CONCERT;
  static const ShowType OTHER;

  [[nodiscard]] std::string getName() const { return this.name; }
};
}  // namespace show

#endif