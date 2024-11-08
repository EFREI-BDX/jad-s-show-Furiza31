#include "MovieShow.hpp"
#include "ShowType.hpp"

using namespace show;

MovieShow::MovieShow(std::string name, std::string description,
                     std::string director, std::string yearOfRelease,
                     MovieType movieType)
    : Show(name, description, ShowType::MOVIE) {
  this->director = director;
  this->yearOfRelease = yearOfRelease;
  this->movieType = movieType;
}