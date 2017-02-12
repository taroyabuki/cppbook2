#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  char str[100];//文字列のための領域の確保
  int a = 10, b = 20;
  sprintf(str, "%d + %d = %d", a, b, a + b);
  cout << str << endl;//出力値：10 + 20 = 30
}