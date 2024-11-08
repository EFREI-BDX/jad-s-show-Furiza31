#include "ConcertShow.hpp"
#include "ShowType.hpp"

using namespace show;

ConcertShow::ConcertShow(std::string name, std::string description,
                         std::string artist)
    : Show(name, description, &ShowType::CONCERT) {
  this->artist = artist;
}