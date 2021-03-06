#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Shape.hpp"

std::string
shape::getColor() const
{
  return color;
}

shape::~shape()
{
  std::cout << "Shape class destructor" << std::endl;
}

shape* getShape(const std::string color, const char s)
{
  shape* instance = 0;
  switch(s)
  {
    case('C'):{
      instance = new circle(color,10.5);
      return instance;
      break;
    }

    case('S'):{
      instance = new square(color, 20.5);
      return instance;
      break;
    }

    case('R'):{
      instance = new rectangle(color, 10.5, 20.5);
      return instance;
      break;
    }
    default:{
      return instance;
      break;
    }
  }

}
