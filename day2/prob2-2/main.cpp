#include <iostream>
#include "minmax.h"

using namespace std;

int main() {
  MinMax m;
  int a = 4;
  int b = 2;
  int c = 7;

  cout << a << " ," << b << " and " << c << ", max is " << m.max(a, b, c) << endl;
  cout << a << " ," << b << " and " << c << ", min is " << m.min(a, b, c) << endl;
  return 0;
}
