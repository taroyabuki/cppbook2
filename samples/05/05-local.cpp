#include <iostream>
using namespace std;

int f() {
  int x = 0;
  ++x;
  return x;
}

int main() {
  cout << f() << endl;//出力値：1
  cout << f() << endl;//出力値：1（前の呼び出しとは無関係）
  cout << f() << endl;//出力値：1（前の呼び出しとは無関係）
}