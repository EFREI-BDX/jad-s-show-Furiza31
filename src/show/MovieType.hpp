#ifndef MOVIE_TYPE_HPP
#define MOVIE_TYPE_HPP

#include <string>

namespace show {
class MovieType {
 private:
  std::string name;
  MovieType(const std::string &name);
  ~MovieType() = default;

 public:
  static const MovieType ACTION;
  static const MovieType ADVENTURE;
  static const MovieType COMEDY;
  static const MovieType DRAMA;
  static const MovieType FANTASY;
  static const MovieType HORROR;
  static const MovieType ROMANCE;
  static const MovieType SCIENCE_FICTION;
  static const MovieType THRILLER;
  [[nodiscard]] std::string getName() const { return this.name; }
};
}  // namespace show

#endif