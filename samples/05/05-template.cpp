#include <iostream>
#include <string>
using namespace std;

template <typename T>
void mySwap(T& x, T& y) {
  T tmp = x;
  x = y;
  y = tmp;
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

  string s = "abc";
  string t = "xyz";
  mySwap(s, t);     //mySwap(string& a, string& b)を使う
  cout << s << endl;//出力値：xyz
  cout << t << endl;//出力値：abc
}