#include <iostream>
#include "twostrings.h"

using namespace std;

int main() {
  TwoStrings s;
  s.setString1("Hello");
  s.setString2("World");
  cout << "The first string is " << s.getString1() << endl;
  cout << "The second string is " << s.getString2() << endl;
  cout << "The connected string is " << s.getConnectedString() << endl;
  cout << "The length of connected string is " << s.getConnectedLength() << endl;
  return 0;
}
