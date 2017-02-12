#include <iostream>
#include <algorithm>
using namespace std;

void mySwap(int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a = 1;
  int b = 2;

  //mySwap(a, b);
  swap(a, b);//<algorithm>が必要

  cout << a << endl;//出力値：2
  cout << b << endl;//出力値：1
}