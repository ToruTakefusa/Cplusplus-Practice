#ifndef _CAR_H_
#define _CAR_H_

class Car {
 public:
  Car();
  ~Car();
  void move();
  void supply(int fueal);
 private:
  int m_fuel;
  int m_migration;
};
#endif // _CAR_H_
