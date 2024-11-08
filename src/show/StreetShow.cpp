#include "ShowType.hpp"
#include "StreetShow.hpp"

using namespace show;

StreetShow::StreetShow(std::string name, std::string description,
                       std::vector<std::string> performers)
    : Show(name, description, ShowType::STREET_SHOW) {
  this->performers = performers;
}