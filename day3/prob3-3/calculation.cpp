#include "calculation.h"

void Calculation::setNumber1(int num) {
  this -> a = num;
}

void Calculation::setNumber2(int num) {
  this -> b = num;
}

int Calculation::getNumber1() {
  return this -> a;
}

int Calculation::getNumber2() {
  return this -> b;
}

int Calculation::add() {
  return this -> a + this -> b;
}

int Calculation::sub() {
  return this -> a - this -> b;
}
