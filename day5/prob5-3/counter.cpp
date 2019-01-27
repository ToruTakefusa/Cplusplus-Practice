#include "counter.h"

int Counter::m_totalCount = 0;

Counter::Counter() : m_count(0) {
}

void Counter::reset() {
  m_count = 0;
}

void Counter::count() {
  m_count++;
}

int Counter::getCount() {
  return m_count;
}

int Counter::getTotalCount() {
  return Counter::m_totalCount;
}
