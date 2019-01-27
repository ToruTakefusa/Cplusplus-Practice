#include <iostream>
#include "function.h"

using namespace std;

int main() {
  int m = 3, n = 1;
  cout << "The max of " << m << " and " << n <<" is " << Function::max(m, n) << endl;
  cout << "The min of " << m << " and " << n << " is " << Function::min(m, n) << endl;
  return 0;
}
