#ifndef MOVIESHOW_HPP
#define MOVIESHOW_HPP

#include <string>

#include "MovieType.hpp"
#include "Show.hpp"

namespace show {
class MovieShow : public Show {
 private:
  std::string director;
  std::string yearOfRelease;
  const MovieType* movieType;

 public:
  MovieShow(std::string name, std::string description, std::string director,
            std::string yearOfRelease, const MovieType* movieType);

  [[nodiscard]] std::string getDirector() const { return this->director; }
  [[nodiscard]] std::string getYearOfRelease() const {
    return this->yearOfRelease;
  }
  [[nodiscard]] const MovieType* getMovieType() const {
    return this->movieType;
  }
  ~MovieShow() = default;
};

}  // namespace show

#endif