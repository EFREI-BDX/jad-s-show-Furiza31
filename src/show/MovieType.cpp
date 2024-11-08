#include "MovieType.hpp"

using namespace show;

MovieType::MovieType(const std::string &name) { this->name = name; }

const MovieType MovieType::ACTION("Action");
const MovieType MovieType::ADVENTURE("Adventure");
const MovieType MovieType::COMEDY("Comedy");
const MovieType MovieType::DRAMA("Drama");
const MovieType MovieType::FANTASY("Fantasy");
const MovieType MovieType::HORROR("Horror");
const MovieType MovieType::ROMANCE("Romance");
const MovieType MovieType::SCIENCE_FICTION("Science Fiction");
const MovieType MovieType::THRILLER("Thriller");