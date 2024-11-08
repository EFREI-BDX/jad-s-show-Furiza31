#include "ShowType.hpp"
#include "ThearterShow.hpp"

using namespace show;

ThearterShow::ThearterShow(std::string name, std::string description,
                           std::string director,
                           std::vector<std::string> actors)
    : Show(name, description, ShowType::THEATER) {
  this->director = director;
  this->actors = actors;
}