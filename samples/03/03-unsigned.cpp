#include <iostream>
using namespace std;

int main() {
  unsigned a = 1;
  int b = -3;
  cout << a + b << endl;//出力値：4294967294

  unsigned x = 10;
  cout << (-1 <= x ? "小さくない" : "小さい") << endl;//出力値：小さい
}