#include "rat.h"
#include <iostream>

using namespace std;

int CRat::m_count = 0;

CRat::CRat() : m_id(0) {
  m_id = m_count;
  m_count++;
}

CRat::~CRat() {
  cout << "Rat:" << m_id << " is deleted." << endl;
  m_count-- ;
}

void CRat:: showNum() {
  cout << "There are " << m_count << " rats now." << endl;
}

void CRat::squeak() {
  cout << m_id << ":" << "tyu-tyu-" << endl;
}
