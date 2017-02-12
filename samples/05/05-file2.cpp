#include <iostream>
using namespace std;

void f();//関数f()の宣言のみ。定義は別のファイルにある

int main() {
  extern int x;     //別のファイルで定義されている変数を利用する
  cout << x << endl;//出力値：10
  f();              //出力値：Hello, World!
}