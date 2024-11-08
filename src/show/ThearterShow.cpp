#include "ShowType.hpp"
#include "TheaterShow.hpp"

using namespace show;

TheaterShow::TheaterShow(std::string name, std::string description,
                         std::string director, std::vector<std::string> actors)
    : Show(name, description, &ShowType::THEATER) {
  this->director = director;
  this->actors = actors;
}