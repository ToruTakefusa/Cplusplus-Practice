#include <iostream>
#include <string>

int main() {
  using namespace std;
  cout << "Input Last name:";
  string a;
  cin >> a;
  cout << "Input First name:";
  string b;
  cin >> b;
  cout << "Your name is " << a + " " + b << endl;
  return 0;
}
