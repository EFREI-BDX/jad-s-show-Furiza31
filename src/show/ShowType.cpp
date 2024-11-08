#include "ShowType.hpp"

using namespace show;

ShowType::ShowType(const std::string &name) { this->name = name; }

const ShowType ShowType::MOVIE("Movie");
const ShowType ShowType::STREET_SHOW("Street Show");
const ShowType ShowType::THEATER("Theater");
const ShowType ShowType::CONCERT("Concert");
const ShowType ShowType::OTHER("Other");