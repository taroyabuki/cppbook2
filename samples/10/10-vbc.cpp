#include <iostream>

class vbc {
private:
  virtual ~vbc() = 0;
  friend class X;
  friend class Y;
};

class X : virtual protected vbc {};

class Y : virtual vbc, X {};

int main() {
  X x;
}

vbc::~vbc() {
  std::cout << "protected abstract virtual base pure virtual private destructor" << std::endl;
}