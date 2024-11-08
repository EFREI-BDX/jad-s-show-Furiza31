#ifndef CONCERTSHOW_HPP
#define CONCERTSHOW_HPP

#include "Show.hpp"
#include "string"

namespace show {
class ConcertShow : public Show {
 private:
  std::string artist;

 public:
  ConcertShow(std::string name, std::string description, std::string artist);
  ~ConcertShow() = default;

  [[nodiscard]] std::string getArtist() const { return this.artist; }
}
}  // namespace show

#endif