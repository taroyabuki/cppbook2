#pragma once

#include <iostream>

//引数が素数かどうかを判定する
bool isPrime(int n) {
  if (n < 2) return false;//2未満なら素数ではない
  if (n == 2) return true;//2は素数

  for (int j = 2; j < n; ++j) {
    if (n % j == 0) return false;//2以上n未満の数で割り切れたら素数ではない
  }
  return true;
}

//要素の最初と最後の5個を表示する
template<typename T>
void report(T first, T last) {
  const int num = 5;
  if (last - first < num) {//num個未満ならすべて表示
    for (T i = first; i != last; ++i) std::cout << *i << ", ";
  }
  else {
    for (T i = first; i != first + num; ++i) std::cout << *i << ", ";
    std::cout << std::endl;
    for (T i = last - num; i != last; ++i) std::cout << *i << ", ";
  }
  std::cout << std::endl;
}