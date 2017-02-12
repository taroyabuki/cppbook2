#include <iostream>
using namespace std;

int main() {
  int i = 0;
  auto f = [&i]() { ++i; };

  f();
  f();
  f();

  cout << i << endl;//出力値：3
}