#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include <string>

class Calculation {
 private:
  int a;
  int b;
 public:
  void setNumber1(int num);
  void setNumber2(int num);
  int getNumber1();
  int getNumber2();
  int add();
  int sub();
};

#endif // _CALCULATION_H_
