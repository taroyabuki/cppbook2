#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void mySwap(T& a, T& b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template <typename T>
void mySwap(T* a, T* b) {
  T tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  int a = 1;
  int b = 2;

  mySwap(a, b);     //参照版
  cout << a << endl;//出力値：2
  cout << b << endl;//出力値：1

  mySwap(&a, &b);   //ポインタ版
  cout << a << endl;//出力値：1
  cout << b << endl;//出力値：2
}