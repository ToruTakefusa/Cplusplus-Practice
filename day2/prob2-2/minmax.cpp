#include "minmax.h"

int MinMax::max(int a, int b, int c) {
  if ((a >= b) && (a >= c)) {
	return a;
	}
  if ((b > a) && (b >= c)){
	  return b;
  }
  return c;
}

int MinMax::min(int a, int b, int c) {
  if ((a <= b) && (a <= c)) {
	return a;
  }
  if ((b < a) && (b <= c)) {
	return b;
  }
  return c;
}
