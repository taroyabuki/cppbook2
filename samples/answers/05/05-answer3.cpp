#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int a = 1;
  int b = 2;
  swap(a, b);
  cout << a << endl;//出力値：2
  cout << b << endl;//出力値：1

  double x = 1.23;
  double y = 4.56;
  swap(x, y);
  cout << x << endl;//出力値：4.56
  cout << y << endl;//出力値：1.23

  string s = "abc";
  string t = "xyz";
  swap(s, t);
  cout << s << endl;//出力値：xyz
  cout << t << endl;//出力値：abc
}