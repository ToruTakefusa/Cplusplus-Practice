#include "twostrings.h"

void TwoStrings::setString1(string s) {
  this->s1 = s;
}

void TwoStrings::setString2(string s) {
  this->s2 = s;
}

string TwoStrings::getString1() {
  return this->s1;
}

string TwoStrings::getString2() {
  return this->s2;
}

string TwoStrings::getConnectedString() {
  return this->s1 + this->s2;
}

int TwoStrings::getConnectedLength() {
  return this->s1.length() + this->s2.length();
}
