#include "Circle.hpp"

double
circle::area() const
{
  return (3.14f * (radius * radius));
}

std::string
circle::toString() const
{
  return "circle type";
}