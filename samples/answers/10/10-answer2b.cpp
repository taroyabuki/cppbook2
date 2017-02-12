#include <iostream>
#include <vector>
using namespace std;

struct X {
  vector<double> vec;
};

X f() {
  X x;
  x.vec.resize(1000000);
  return x;
}

int main() {
  for (int i = 0; i < 1000; ++i) X x(f());
}