#include <iostream>
#include "counter.h"

using namespace std;

int main() {
  Counter c1, c2;
  c1.count();
  c2.count();
  c2.count();
  c2.reset();
  c1.count();
  c1.count();
  c2.count();
  cout << "The counts of c1 are " << c1.getCount() << endl;
  cout << "The counts of c2 are " << c2.getCount() << endl;
  cout << "The total counts are " << c1.getCount() + c2.getCount() << endl;
  return 0;
}
