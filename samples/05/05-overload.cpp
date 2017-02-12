#include <iostream>
using namespace std;

void mySwap(int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void mySwap(double& a, double& b) {
  double tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a = 1;
  int b = 2;
  mySwap(a, b);     //mySwap(int& a, int& b)を使う
  cout << a << endl;//出力値：2
  cout << b << endl;//出力値：1

  double x = 1.23;
  double y = 4.56;
  mySwap(x, y);     //mySwap(double& a, double& b)を使う
  cout << x << endl;//出力値：4.56
  cout << y << endl;//出力値：1.23
}