#include "car.h"
#include <iostream>

using namespace std;

int main() {
  Car* pC = 0;
  pC = new Car();
  pC -> supply(10);
  pC -> move();
  pC -> move();
  delete pC;
  cout << "Deleted Car instance" << endl;
  return 0;
}
