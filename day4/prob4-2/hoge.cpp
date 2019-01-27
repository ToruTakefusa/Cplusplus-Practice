#include "hoge.h"
#include <iostream>

using namespace std;

Hoge::Hoge() {
  cout << "Constructor" << endl;
}

void Hoge::foo() {
  cout << "Foo method" << endl;
}

Hoge::~Hoge() {
  cout << "Deconstructor" << endl;
}
