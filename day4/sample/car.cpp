#include "car.h"
#include <iostream>

using namespace std;

Car::Car() : m_fuel(0), m_migration(0) {
  cout << "Create Car object" << endl;
}

Car::~Car() {
  cout << "Destory Car object" << endl;
}

void Car::move() {
  if (m_fuel >= 0) {
	m_migration++;
	m_fuel--;
  }

  cout << "Migration range:" << m_migration << endl;
  cout << "Fuel:" << m_fuel << endl;
}

void Car::supply(int fuel) {
  if (fuel > 0) {
	m_fuel += fuel;
  }
  cout << "Fuel:" << m_fuel << endl;
}
