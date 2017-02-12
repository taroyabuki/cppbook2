#include <iostream>
using namespace std;

struct A {
  int x;
  A(int newX) : x(newX) { cout << "A(int newX) is called.\n"; }
};

int main() {
  A a = 5; //A a(5);と解釈される。
           //出力値：A(int newX) is called.
  cout << a.x << endl;//出力値：5
}