#include <iostream>
using namespace std;

struct A {
  int x;
  //暗黙の型変換を禁止する。
  explicit A(int newX) : x(newX) { cout << "A(int newX) is called.\n"; }
};

int main() {
  A a = 5;//エラー
}