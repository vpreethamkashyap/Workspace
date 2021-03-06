#include "Shape.hpp"
#include <iostream>

using namespace std;

extern shape* getShape(const std::string color, const char s);

int main()
{

  // Client driver code

  shape* driver = getShape("Blue", 'C');

  cout << driver->getColor() << endl;
  cout << driver->area() << endl;
  cout << driver->toString() << endl;

  delete driver;

  return 0;

}
