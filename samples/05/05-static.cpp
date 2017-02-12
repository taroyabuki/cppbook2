#include <iostream>
using namespace std;

int f() {
  static int x = 0;//静的変数（初期化は1度だけ）
  ++x;
  return x;
}

int main() {
  cout << f() << endl;//出力値：1
  cout << f() << endl;//出力値：2（静的変数の共有）
  cout << f() << endl;//出力値：3（静的変数の共有）
}