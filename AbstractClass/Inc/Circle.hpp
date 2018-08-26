#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include "Shape.hpp"

/**
 * Circle class that is derived from Shape. It should have one private double instance variable representing the radius,
 * and should have the following public member functions:
 */

class circle : public shape
{

private:

  /**
   * Represents the radius
   */
  double radius;

public:

  /**
   * Circle derived class constructor
   * @param color
   * @param radius
   */
  circle(const std::string& color, double radius):
    shape(color),
    radius(radius)
{
    std::cout << "Circle class constructor" << std::endl;
}

  /**
   *
   */
  ~circle()
  {
    std::cout << "Circle class destructor" << std::endl;
  }

  /**
   *
   * @return
   * this overriding member function computes and returns the Circle object's area value.
   */
  double area() const;

  /**
   *
   * @return
   * this overriding member function returns the Circle object's description (color, type, measurements, and area).
   */
  std::string toString() const;

};

#endif
