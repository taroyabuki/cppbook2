#include <iostream>
using namespace std;

int x;//グローバル変数

void f() {
  x = 2;
  int y = 2;//ローカル変数
  cout << "y in f = " << y << endl;//出力値：y in f = 2;
}

int main() {
  x = 1;
  int y = 1;//ローカル変数
  f();
  cout << "x = " << x << endl;//出力値：x = 2
  cout << "y = " << y << endl;//出力値：y = 1
}